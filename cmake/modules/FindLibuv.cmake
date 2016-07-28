include(FindPackageHandleStandardArgs)

find_path(LIBUV_INCLUDE_DIRS
  NAMES uv.h
  PATHS ${LIBUV_ROOT} ENV LIBUV_ROOT
  PATH_SUFFIXES include
  DOC "Libuv include directory")

find_library(LIBUV_LIBRARIES
  NAMES uv
  PATHS ${LIBUV_ROOT} ENV LIBUV_ROOT
  PATH_SUFFIXES lib
  DOC "Libuv library directory")

find_package_handle_standard_args(LIBUV DEFAULT_MSG LIBUV_LIBRARIES LIBUV_INCLUDE_DIRS)
mark_as_advanced(LIBUV_INCLUDE_DIRS LIBUV_LIBRARIES)

