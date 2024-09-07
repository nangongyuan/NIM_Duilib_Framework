cmake_minimum_required(VERSION 3.10)

# set(CMAKE_EXE_LINKER_FLAGS"${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")

project(examples)

add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

add_definitions(-DUNICODE -D_UNICODE)

add_subdirectory(base)
add_subdirectory(duilib)
add_subdirectory(ui_components)
add_subdirectory(examples/basic)
add_subdirectory(examples/cef)
add_subdirectory(examples/controls)
add_subdirectory(examples/controls2)
add_subdirectory(examples/datetime)
add_subdirectory(examples/grid)
add_subdirectory(examples/layouts)
add_subdirectory(examples/move_control)
add_subdirectory(examples/multi_browser)
add_subdirectory(examples/popover)
add_subdirectory(examples/richlist)
add_subdirectory(examples/virtualbox)

add_subdirectory(third_party/cef_wrapper)


set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "CMakeTargets")

set_target_properties(basic PROPERTIES FOLDER "examples")
set_target_properties(cef PROPERTIES FOLDER "examples")
set_target_properties(controls PROPERTIES FOLDER "examples")
set_target_properties(controls2 PROPERTIES FOLDER "examples")
set_target_properties(datetime PROPERTIES FOLDER "examples")
set_target_properties(grid PROPERTIES FOLDER "examples")
set_target_properties(layouts PROPERTIES FOLDER "examples")
set_target_properties(move_control PROPERTIES FOLDER "examples")
set_target_properties(multi_browser PROPERTIES FOLDER "examples")
set_target_properties(popover PROPERTIES FOLDER "examples")
set_target_properties(richlist PROPERTIES FOLDER "examples")
set_target_properties(virtualbox PROPERTIES FOLDER "examples")

set_target_properties(cef_wrapper PROPERTIES FOLDER "third_party")








