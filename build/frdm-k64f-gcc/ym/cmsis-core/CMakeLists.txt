# NOTE: This file is generated by yotta: changes will be overwritten!


project(cmsis-core)


# include root directories of all components we depend on (directly and
# indirectly, including ourself)
include_directories("C:/development/cpp/mbed3")
include_directories("C:/development/cpp/mbed3/yotta_modules/cmsis-core")
include_directories("C:/development/cpp/mbed3/yotta_modules/cmsis-core-freescale")
include_directories("C:/development/cpp/mbed3/yotta_modules/cmsis-core-k64f")
include_directories("C:/development/cpp/mbed3/yotta_modules/cmsis-core")


# recurse into dependencies that aren't built elsewhere
add_subdirectory("C:/development/cpp/mbed3/build/frdm-k64f-gcc/ym/cmsis-core-freescale" "C:/development/cpp/mbed3/build/frdm-k64f-gcc/ym/cmsis-core-freescale")



# And others (typically CMSIS implementations) need to export non-system header
# files. Please don't use this facility. Please. It's much, much better to fix
# implementations that import these headers to import them using the full path.
include_directories("C:/development/cpp/mbed3/yotta_modules/cmsis-core/cmsis-core")
include_directories("C:/development/cpp/mbed3/yotta_modules/cmsis-core-k64f/cmsis-core-k64f")
include_directories("C:/development/cpp/mbed3/yotta_modules/cmsis-core/cmsis-core")


# modules with custom CMake build systems may append to the
# YOTTA_GLOBAL_INCLUDE_DIRS property to add compile-time-determined include
# directories:
get_property(GLOBAL_INCLUDE_DIRS GLOBAL PROPERTY YOTTA_GLOBAL_INCLUDE_DIRS)
include_directories(${GLOBAL_INCLUDE_DIRS})

# Provide the version of the component being built, in case components want to
# embed this into compiled libraries
# !!! WARNING: use of this is deprecated, please use the
# YOTTA_<MODNAME>_VERSION_STRING / _MAJOR / _MINOR / _PATCH definitions instead
set(YOTTA_COMPONENT_VERSION "0.2.6")
add_definitions(-DYOTTA_COMPONENT_VERSION="0.2.6")

# Provide versions of all the components we depend on, the corresponding
# preprocessor definitions are generated in yotta_config.h
set(YOTTA_CMSIS_CORE_FREESCALE_VERSION_STRING "0.1.4")
set(YOTTA_CMSIS_CORE_FREESCALE_VERSION_MAJOR 0)
set(YOTTA_CMSIS_CORE_FREESCALE_VERSION_MINOR 1)
set(YOTTA_CMSIS_CORE_FREESCALE_VERSION_PATCH 4)
set(YOTTA_CMSIS_CORE_VERSION_STRING "0.2.6")
set(YOTTA_CMSIS_CORE_VERSION_MAJOR 0)
set(YOTTA_CMSIS_CORE_VERSION_MINOR 2)
set(YOTTA_CMSIS_CORE_VERSION_PATCH 6)

# recurse into subdirectories for this component, using the two-argument
# add_subdirectory because the directories referred to here exist in the source
# tree, not the working directory
add_subdirectory(
    "C:/development/cpp/mbed3/build/frdm-k64f-gcc/ym/cmsis-core/yotta_dummy_lib_cmsis_core"
    "C:/development/cpp/mbed3/build/frdm-k64f-gcc/ym/cmsis-core/yotta_dummy_lib_cmsis_core"
)
