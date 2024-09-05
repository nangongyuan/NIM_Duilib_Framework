cmake_minimum_required(VERSION 3.10)
project(ui_components)

add_definitions(-DSUPPORT_CEF)

include_directories(${CMAKE_CURRENT_LIST_DIR})
include_directories(${CMAKE_CURRENT_LIST_DIR}/../)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../third_party/cef_wrapper/)

source_group("" FILES
    ${CMAKE_CURRENT_LIST_DIR}/./public_define.h
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.h
    ${CMAKE_CURRENT_LIST_DIR}/./targetver.h
    ${CMAKE_CURRENT_LIST_DIR}/./ui_cef_control.h
    ${CMAKE_CURRENT_LIST_DIR}/./ui_components.h
)

source_group("cef_control/app" FILES
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/cef_js_bridge.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/cef_js_bridge.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/client_app.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/client_app.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/client_app_browser.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/client_app_render.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/ipc_string_define.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/js_handler.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/js_handler.h
)

source_group("cef_control/control" FILES
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control_base.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control_base.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control_base_ui.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control_event.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control_ui.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_native_control.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_native_control.h
)

source_group("cef_control/handler" FILES
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/browser_handler.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/browser_handler.h
)

source_group("cef_control/handler/drag" FILES
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/bytes_write_handler.cc
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/bytes_write_handler.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/osr_dragdrop_events.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/osr_dragdrop_win.cc
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/osr_dragdrop_win.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/util_win.cc
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/util_win.h
)

source_group("cef_control/manager" FILES
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/manager/cef_manager.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/manager/cef_manager.h
)

source_group("cef_control/util" FILES
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/util/auto_unregister.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/util/memory_dc.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/util/memory_dc.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/util/util.h
)

source_group("comboex" FILES
    ${CMAKE_CURRENT_LIST_DIR}/comboex/CheckCombo.cpp
    ${CMAKE_CURRENT_LIST_DIR}/comboex/CheckCombo.h
    ${CMAKE_CURRENT_LIST_DIR}/comboex/FilterCombo.cpp
    ${CMAKE_CURRENT_LIST_DIR}/comboex/FilterCombo.h
    ${CMAKE_CURRENT_LIST_DIR}/comboex/ShadowCombo.cpp
    ${CMAKE_CURRENT_LIST_DIR}/comboex/ShadowCombo.h
)

source_group("grid" FILES
    ${CMAKE_CURRENT_LIST_DIR}/grid/Grid.cpp
    ${CMAKE_CURRENT_LIST_DIR}/grid/Grid.h
    ${CMAKE_CURRENT_LIST_DIR}/grid/GridBase.cpp
    ${CMAKE_CURRENT_LIST_DIR}/grid/GridBase.h
    ${CMAKE_CURRENT_LIST_DIR}/grid/GridBody.cpp
    ${CMAKE_CURRENT_LIST_DIR}/grid/GridBody.h
)

source_group("menu" FILES
    ${CMAKE_CURRENT_LIST_DIR}/menu/observer_impl_base.hpp
    ${CMAKE_CURRENT_LIST_DIR}/menu/ui_menu.cpp
    ${CMAKE_CURRENT_LIST_DIR}/menu/ui_menu.h
)

source_group("mini_blink_control" FILES
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/web_view_base.cpp
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/web_view_base.h
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/wke_memory_dc.cpp
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/wke_memory_dc.h
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/wke_web_native.cpp
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/wke_web_native.h
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/wke_web_view.cpp
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/wke_web_view.h
)

source_group("modal_wnd" FILES
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/async_do_modal.cpp
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/async_do_modal.h
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/async_modal_runner.cpp
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/async_modal_runner.h
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/file_dialog_ex.cpp
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/file_dialog_ex.h
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/modal_wnd_base.h
)

source_group("msgbox" FILES
    ${CMAKE_CURRENT_LIST_DIR}/msgbox/msgbox.cpp
    ${CMAKE_CURRENT_LIST_DIR}/msgbox/msgbox.h
)

source_group("popover" FILES
    ${CMAKE_CURRENT_LIST_DIR}/popover/alert.cpp
    ${CMAKE_CURRENT_LIST_DIR}/popover/alert.h
    ${CMAKE_CURRENT_LIST_DIR}/popover/notification.cpp
    ${CMAKE_CURRENT_LIST_DIR}/popover/notification.h
    ${CMAKE_CURRENT_LIST_DIR}/popover/popover.cpp
    ${CMAKE_CURRENT_LIST_DIR}/popover/popover.h
    ${CMAKE_CURRENT_LIST_DIR}/popover/tooltip.cpp
    ${CMAKE_CURRENT_LIST_DIR}/popover/tooltip.h
)

source_group("shadow_wnd" FILES
    ${CMAKE_CURRENT_LIST_DIR}/shadow_wnd/shadow_wnd.cpp
    ${CMAKE_CURRENT_LIST_DIR}/shadow_wnd/shadow_wnd.h
)

source_group("toast" FILES
    ${CMAKE_CURRENT_LIST_DIR}/toast/toast.cpp
    ${CMAKE_CURRENT_LIST_DIR}/toast/toast.h
)

source_group("windows_manager" FILES
    ${CMAKE_CURRENT_LIST_DIR}/windows_manager/windows_manager.cpp
    ${CMAKE_CURRENT_LIST_DIR}/windows_manager/windows_manager.h
    ${CMAKE_CURRENT_LIST_DIR}/windows_manager/window_ex.cpp
    ${CMAKE_CURRENT_LIST_DIR}/windows_manager/window_ex.h
)

set(SOURCE_FILES
    ${CMAKE_CURRENT_LIST_DIR}/./public_define.h
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.cpp
    ${CMAKE_CURRENT_LIST_DIR}/./stdafx.h
    ${CMAKE_CURRENT_LIST_DIR}/./targetver.h
    ${CMAKE_CURRENT_LIST_DIR}/./ui_cef_control.h
    ${CMAKE_CURRENT_LIST_DIR}/./ui_components.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/cef_js_bridge.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/cef_js_bridge.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/client_app.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/client_app.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/client_app_browser.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/client_app_render.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/ipc_string_define.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/js_handler.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/app/js_handler.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control_base.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control_base.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control_base_ui.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control_event.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_control_ui.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_native_control.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/control/cef_native_control.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/browser_handler.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/browser_handler.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/bytes_write_handler.cc
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/bytes_write_handler.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/osr_dragdrop_events.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/osr_dragdrop_win.cc
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/osr_dragdrop_win.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/util_win.cc
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/handler/drag/util_win.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/manager/cef_manager.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/manager/cef_manager.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/util/auto_unregister.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/util/memory_dc.cpp
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/util/memory_dc.h
    ${CMAKE_CURRENT_LIST_DIR}/cef_control/util/util.h
    ${CMAKE_CURRENT_LIST_DIR}/comboex/CheckCombo.cpp
    ${CMAKE_CURRENT_LIST_DIR}/comboex/CheckCombo.h
    ${CMAKE_CURRENT_LIST_DIR}/comboex/FilterCombo.cpp
    ${CMAKE_CURRENT_LIST_DIR}/comboex/FilterCombo.h
    ${CMAKE_CURRENT_LIST_DIR}/comboex/ShadowCombo.cpp
    ${CMAKE_CURRENT_LIST_DIR}/comboex/ShadowCombo.h
    ${CMAKE_CURRENT_LIST_DIR}/grid/Grid.cpp
    ${CMAKE_CURRENT_LIST_DIR}/grid/Grid.h
    ${CMAKE_CURRENT_LIST_DIR}/grid/GridBase.cpp
    ${CMAKE_CURRENT_LIST_DIR}/grid/GridBase.h
    ${CMAKE_CURRENT_LIST_DIR}/grid/GridBody.cpp
    ${CMAKE_CURRENT_LIST_DIR}/grid/GridBody.h
    ${CMAKE_CURRENT_LIST_DIR}/menu/observer_impl_base.hpp
    ${CMAKE_CURRENT_LIST_DIR}/menu/ui_menu.cpp
    ${CMAKE_CURRENT_LIST_DIR}/menu/ui_menu.h
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/web_view_base.cpp
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/web_view_base.h
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/wke_memory_dc.cpp
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/wke_memory_dc.h
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/wke_web_native.cpp
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/wke_web_native.h
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/wke_web_view.cpp
    ${CMAKE_CURRENT_LIST_DIR}/mini_blink_control/wke_web_view.h
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/async_do_modal.cpp
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/async_do_modal.h
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/async_modal_runner.cpp
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/async_modal_runner.h
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/file_dialog_ex.cpp
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/file_dialog_ex.h
    ${CMAKE_CURRENT_LIST_DIR}/modal_wnd/modal_wnd_base.h
    ${CMAKE_CURRENT_LIST_DIR}/msgbox/msgbox.cpp
    ${CMAKE_CURRENT_LIST_DIR}/msgbox/msgbox.h
    ${CMAKE_CURRENT_LIST_DIR}/popover/alert.cpp
    ${CMAKE_CURRENT_LIST_DIR}/popover/alert.h
    ${CMAKE_CURRENT_LIST_DIR}/popover/notification.cpp
    ${CMAKE_CURRENT_LIST_DIR}/popover/notification.h
    ${CMAKE_CURRENT_LIST_DIR}/popover/popover.cpp
    ${CMAKE_CURRENT_LIST_DIR}/popover/popover.h
    ${CMAKE_CURRENT_LIST_DIR}/popover/tooltip.cpp
    ${CMAKE_CURRENT_LIST_DIR}/popover/tooltip.h
    ${CMAKE_CURRENT_LIST_DIR}/shadow_wnd/shadow_wnd.cpp
    ${CMAKE_CURRENT_LIST_DIR}/shadow_wnd/shadow_wnd.h
    ${CMAKE_CURRENT_LIST_DIR}/toast/toast.cpp
    ${CMAKE_CURRENT_LIST_DIR}/toast/toast.h
    ${CMAKE_CURRENT_LIST_DIR}/windows_manager/windows_manager.cpp
    ${CMAKE_CURRENT_LIST_DIR}/windows_manager/windows_manager.h
    ${CMAKE_CURRENT_LIST_DIR}/windows_manager/window_ex.cpp
    ${CMAKE_CURRENT_LIST_DIR}/windows_manager/window_ex.h
)

add_library(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} base)
target_link_libraries(${PROJECT_NAME} duilib)
