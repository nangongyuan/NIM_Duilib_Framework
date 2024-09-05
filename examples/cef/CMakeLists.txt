cmake_minimum_required(VERSION 3.10)
project(cef)

add_definitions(-DUNICODE -D_UNICODE)

include_directories(${CMAKE_CURRENT_LIST_DIR})
include_directories(${CMAKE_CURRENT_LIST_DIR}/../../)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../../third_party/cef_wrapper/)

source_group("" FILES
    ${CMAKE_CURRENT_LIST_DIR}/./cef_form.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./cef_form.h
    ${CMAKE_CURRENT_LIST_DIR}/./main.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./main.h
    ${CMAKE_CURRENT_LIST_DIR}/./resource.h
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.h
    ${CMAKE_CURRENT_LIST_DIR}/./targetver.h
)

set(SOURCE_FILES
    ${CMAKE_CURRENT_LIST_DIR}/./cef_form.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./cef_form.h
    ${CMAKE_CURRENT_LIST_DIR}/./main.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./main.h
    ${CMAKE_CURRENT_LIST_DIR}/./resource.h
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.h
    ${CMAKE_CURRENT_LIST_DIR}/./targetver.h
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

add_dependencies(${PROJECT_NAME} base duilib ui_components)

target_link_libraries(${PROJECT_NAME} base)
target_link_libraries(${PROJECT_NAME} duilib)
target_link_libraries(${PROJECT_NAME} ui_components)
target_link_libraries(${PROJECT_NAME} cef_wrapper)


# 指定库的路径
set(LIBRARY_PATH ${CMAKE_CURRENT_LIST_DIR}/../../libs/x64/)

# 链接库
# 区分 Debug 和 Release 版本的库
# target_link_libraries(${PROJECT_NAME} 
#    debug ${LIBRARY_PATH}/nim_libcef_d.lib  # Debug 版本库
#    optimized ${LIBRARY_PATH}/nim_libcef.lib  # Release 版本库
# )

# 添加延迟加载选项
target_link_libraries(${PROJECT_NAME} ${LIBRARY_PATH}/nim_libcef.lib)
target_link_options(${PROJECT_NAME} PRIVATE "/DELAYLOAD:nim_libcef.dll")

set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/SUBSYSTEM:WINDOWS")

if (MSVC)
    set_target_properties(${PROJECT_NAME}
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_HOME_DIRECTORY}/bin"
        RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_HOME_DIRECTORY}/bin"
    )
endif (MSVC)

