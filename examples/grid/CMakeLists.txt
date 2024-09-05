cmake_minimum_required(VERSION 3.10)
project(grid)

add_definitions(-DUNICODE -D_UNICODE)

include_directories(${CMAKE_CURRENT_LIST_DIR})
include_directories(${CMAKE_CURRENT_LIST_DIR}/../../)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../../ui_components)

source_group("" FILES
    ${CMAKE_CURRENT_LIST_DIR}/./main.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./main.h
    ${CMAKE_CURRENT_LIST_DIR}/./main_form.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./main_form.h
    ${CMAKE_CURRENT_LIST_DIR}/./resource.h
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.h
)

source_group("control" FILES
    ${CMAKE_CURRENT_LIST_DIR}/control/MyGrid.cpp
    ${CMAKE_CURRENT_LIST_DIR}/control/MyGrid.h
)

set(SOURCE_FILES
    ${CMAKE_CURRENT_LIST_DIR}/./main.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./main.h
    ${CMAKE_CURRENT_LIST_DIR}/./main_form.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./main_form.h
    ${CMAKE_CURRENT_LIST_DIR}/./resource.h
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.h
    ${CMAKE_CURRENT_LIST_DIR}/control/MyGrid.cpp
    ${CMAKE_CURRENT_LIST_DIR}/control/MyGrid.h
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

add_dependencies(${PROJECT_NAME} base duilib)
target_link_libraries(${PROJECT_NAME} base)
target_link_libraries(${PROJECT_NAME} duilib)
target_link_libraries(${PROJECT_NAME} ui_components)

# 指定库的路径
set(LIBRARY_PATH ${CMAKE_CURRENT_LIST_DIR}/../../libs/)


# 添加延迟加载选项
target_link_libraries(${PROJECT_NAME} ${LIBRARY_PATH}/libxl.lib)


set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/SUBSYSTEM:WINDOWS")

if (MSVC)
    set_target_properties(${PROJECT_NAME}
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_HOME_DIRECTORY}/bin"
        RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_HOME_DIRECTORY}/bin"
    )
endif (MSVC)
