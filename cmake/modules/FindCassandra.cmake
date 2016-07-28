include(FindPackageHandleStandardArgs)

find_path(CASSANDRA_INCLUDE_DIRS
  NAMES cassandra.h
  PATHS ${CASSANDRA_ROOT} ENV CASSANDRA_ROOT
  PATH_SUFFIXES include
  DOC "Cassandra include directory")

find_library(CASSANDRA_LIBRARIES
  NAMES cassandra
  PATHS ${CASSANDRA_ROOT} ENV CASSANDRA_ROOT
  PATH_SUFFIXES lib
  DOC "Cassandra library directory")

find_package_handle_standard_args(CASSANDRA DEFAULT_MSG CASSANDRA_LIBRARIES CASSANDRA_INCLUDE_DIRS)
mark_as_advanced(CASSANDRA_INCLUDE_DIRS CASSANDRA_LIBRARIES)

