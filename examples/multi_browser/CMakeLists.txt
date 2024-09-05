cmake_minimum_required(VERSION 3.10)
project(multi_browser)

add_definitions(-DUNICODE -D_UNICODE)

include_directories(${CMAKE_CURRENT_LIST_DIR})
include_directories(${CMAKE_CURRENT_LIST_DIR}/../../)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../../ui_components)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../../third_party/cef_wrapper/)

source_group("" FILES
    ${CMAKE_CURRENT_LIST_DIR}/./main.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./main.h
    ${CMAKE_CURRENT_LIST_DIR}/./Resource.h
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.h
    ${CMAKE_CURRENT_LIST_DIR}/./targetver.h
)

source_group("browser" FILES
    ${CMAKE_CURRENT_LIST_DIR}/browser/browser_box.cpp
    ${CMAKE_CURRENT_LIST_DIR}/browser/browser_box.h
    ${CMAKE_CURRENT_LIST_DIR}/browser/custom_layout.cpp
    ${CMAKE_CURRENT_LIST_DIR}/browser/custom_layout.h
    ${CMAKE_CURRENT_LIST_DIR}/browser/multi_browser_form.cpp
    ${CMAKE_CURRENT_LIST_DIR}/browser/multi_browser_form.h
    ${CMAKE_CURRENT_LIST_DIR}/browser/multi_browser_form_dragdrop.cpp
    ${CMAKE_CURRENT_LIST_DIR}/browser/multi_browser_manager.cpp
    ${CMAKE_CURRENT_LIST_DIR}/browser/multi_browser_manager.h
)

source_group("control" FILES
    ${CMAKE_CURRENT_LIST_DIR}/control/browser_tab_item.cpp
    ${CMAKE_CURRENT_LIST_DIR}/control/browser_tab_item.h
)

source_group("dragdrop" FILES
    ${CMAKE_CURRENT_LIST_DIR}/dragdrop/bitmap_control.cpp
    ${CMAKE_CURRENT_LIST_DIR}/dragdrop/bitmap_control.h
    ${CMAKE_CURRENT_LIST_DIR}/dragdrop/drag_drop.cpp
    ${CMAKE_CURRENT_LIST_DIR}/dragdrop/drag_drop.h
    ${CMAKE_CURRENT_LIST_DIR}/dragdrop/drag_form.cpp
    ${CMAKE_CURRENT_LIST_DIR}/dragdrop/drag_form.h
)

source_group("taskbar" FILES
    ${CMAKE_CURRENT_LIST_DIR}/taskbar/dwm_util.cpp
    ${CMAKE_CURRENT_LIST_DIR}/taskbar/dwm_util.h
    ${CMAKE_CURRENT_LIST_DIR}/taskbar/taskbar_manager.cpp
    ${CMAKE_CURRENT_LIST_DIR}/taskbar/taskbar_manager.h
)

set(SOURCE_FILES
    ${CMAKE_CURRENT_LIST_DIR}/./main.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./main.h
    ${CMAKE_CURRENT_LIST_DIR}/./Resource.h
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.h
    ${CMAKE_CURRENT_LIST_DIR}/./targetver.h
    ${CMAKE_CURRENT_LIST_DIR}/browser/browser_box.cpp
    ${CMAKE_CURRENT_LIST_DIR}/browser/browser_box.h
    ${CMAKE_CURRENT_LIST_DIR}/browser/custom_layout.cpp
    ${CMAKE_CURRENT_LIST_DIR}/browser/custom_layout.h
    ${CMAKE_CURRENT_LIST_DIR}/browser/multi_browser_form.cpp
    ${CMAKE_CURRENT_LIST_DIR}/browser/multi_browser_form.h
    ${CMAKE_CURRENT_LIST_DIR}/browser/multi_browser_form_dragdrop.cpp
    ${CMAKE_CURRENT_LIST_DIR}/browser/multi_browser_manager.cpp
    ${CMAKE_CURRENT_LIST_DIR}/browser/multi_browser_manager.h
    ${CMAKE_CURRENT_LIST_DIR}/control/browser_tab_item.cpp
    ${CMAKE_CURRENT_LIST_DIR}/control/browser_tab_item.h
    ${CMAKE_CURRENT_LIST_DIR}/dragdrop/bitmap_control.cpp
    ${CMAKE_CURRENT_LIST_DIR}/dragdrop/bitmap_control.h
    ${CMAKE_CURRENT_LIST_DIR}/dragdrop/drag_drop.cpp
    ${CMAKE_CURRENT_LIST_DIR}/dragdrop/drag_drop.h
    ${CMAKE_CURRENT_LIST_DIR}/dragdrop/drag_form.cpp
    ${CMAKE_CURRENT_LIST_DIR}/dragdrop/drag_form.h
    ${CMAKE_CURRENT_LIST_DIR}/taskbar/dwm_util.cpp
    ${CMAKE_CURRENT_LIST_DIR}/taskbar/dwm_util.h
    ${CMAKE_CURRENT_LIST_DIR}/taskbar/taskbar_manager.cpp
    ${CMAKE_CURRENT_LIST_DIR}/taskbar/taskbar_manager.h
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

add_dependencies(${PROJECT_NAME} base duilib)
target_link_libraries(${PROJECT_NAME} base)
target_link_libraries(${PROJECT_NAME} duilib)
target_link_libraries(${PROJECT_NAME} ui_components)
target_link_libraries(${PROJECT_NAME} cef_wrapper)

# 指定库的路径
set(LIBRARY_PATH ${CMAKE_CURRENT_LIST_DIR}/../../libs/x64/)

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
