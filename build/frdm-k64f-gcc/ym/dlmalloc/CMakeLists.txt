# NOTE: This file is generated by yotta: changes will be overwritten!


project(dlmalloc)


# include root directories of all components we depend on (directly and
# indirectly, including ourself)
include_directories("C:/development/cpp/mbed3")
include_directories("C:/development/cpp/mbed3/yotta_modules/dlmalloc")


# recurse into dependencies that aren't built elsewhere




# modules with custom CMake build systems may append to the
# YOTTA_GLOBAL_INCLUDE_DIRS property to add compile-time-determined include
# directories:
get_property(GLOBAL_INCLUDE_DIRS GLOBAL PROPERTY YOTTA_GLOBAL_INCLUDE_DIRS)
include_directories(${GLOBAL_INCLUDE_DIRS})

# Provide the version of the component being built, in case components want to
# embed this into compiled libraries
# !!! WARNING: use of this is deprecated, please use the
# YOTTA_<MODNAME>_VERSION_STRING / _MAJOR / _MINOR / _PATCH definitions instead
set(YOTTA_COMPONENT_VERSION "0.0.6")
add_definitions(-DYOTTA_COMPONENT_VERSION="0.0.6")

# Provide versions of all the components we depend on, the corresponding
# preprocessor definitions are generated in yotta_config.h
set(YOTTA_DLMALLOC_VERSION_STRING "0.0.6")
set(YOTTA_DLMALLOC_VERSION_MAJOR 0)
set(YOTTA_DLMALLOC_VERSION_MINOR 0)
set(YOTTA_DLMALLOC_VERSION_PATCH 6)

# recurse into subdirectories for this component, using the two-argument
# add_subdirectory because the directories referred to here exist in the source
# tree, not the working directory
add_subdirectory(
    "C:/development/cpp/mbed3/build/frdm-k64f-gcc/ym/dlmalloc/source"
    "C:/development/cpp/mbed3/build/frdm-k64f-gcc/ym/dlmalloc/source"
)
