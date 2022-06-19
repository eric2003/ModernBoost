cmake_minimum_required ( VERSION 3.20 )
cmake_policy(SET CMP0074 NEW)

project ( testprj )

set ( PRJ_INCLUDE_DIRS )
set ( PRJ_COMPILE_FEATURES )
set ( PRJ_LIBRARIES )

list ( APPEND PRJ_COMPILE_FEATURES cxx_std_20 )

set ( Boost_USE_STATIC_LIBS ON )

find_package(Boost COMPONENTS locale REQUIRED)

message ( STATUS "Boost_FOUND = ${Boost_FOUND} " )
message ( STATUS "Boost_INCLUDE_DIRS = ${Boost_INCLUDE_DIRS} " )
message ( STATUS "Boost_LIBRARY_DIRS = ${Boost_LIBRARY_DIRS} " )
message ( STATUS "Boost_LIBRARIES = ${Boost_LIBRARIES} " )
message ( STATUS "Boost_VERSION_MACRO = ${Boost_VERSION_MACRO} " )
message ( STATUS "Boost_VERSION_STRING = ${Boost_VERSION_STRING} " )
message ( STATUS "Boost_VERSION = ${Boost_VERSION} " )
message ( STATUS "Boost_LIB_VERSION = ${Boost_LIB_VERSION} " )
message ( STATUS "Boost_VERSION_MAJOR = ${Boost_VERSION_MAJOR} " )
message ( STATUS "Boost_MAJOR_VERSION = ${Boost_MAJOR_VERSION} " )
message ( STATUS "Boost_VERSION_MINOR = ${Boost_VERSION_MINOR} " )
message ( STATUS "Boost_MINOR_VERSION = ${Boost_MINOR_VERSION} " )
message ( STATUS "Boost_VERSION_PATCH = ${Boost_VERSION_PATCH} " )
message ( STATUS "Boost_SUBMINOR_VERSION = ${Boost_SUBMINOR_VERSION} " )
message ( STATUS "Boost_VERSION_COUNT = ${Boost_VERSION_COUNT} " )
message ( STATUS "Boost_LIB_DIAGNOSTIC_DEFINITIONS = ${Boost_LIB_DIAGNOSTIC_DEFINITIONS} " )
message ( STATUS "BOOST_ROOT = ${BOOST_ROOT} " )
message ( STATUS "BOOSTROOT = ${BOOSTROOT} " )
message ( STATUS "BOOST_INCLUDEDIR = ${BOOST_INCLUDEDIR} " )
message ( STATUS "Boost_USE_DEBUG_LIBS = ${Boost_USE_DEBUG_LIBS} " )
message ( STATUS "Boost_USE_RELEASE_LIBS = ${Boost_USE_RELEASE_LIBS} " )
message ( STATUS "Boost_USE_MULTITHREADED = ${Boost_USE_MULTITHREADED} " )
message ( STATUS "Boost_USE_STATIC_LIBS = ${Boost_USE_STATIC_LIBS} " )
message ( STATUS "Boost_USE_STATIC_RUNTIME = ${Boost_USE_STATIC_RUNTIME} " )
message ( STATUS "Boost_USE_DEBUG_RUNTIME = ${Boost_USE_DEBUG_RUNTIME} " )
message ( STATUS "Boost_USE_DEBUG_PYTHON = ${Boost_USE_DEBUG_PYTHON} " )
message ( STATUS "Boost_USE_STLPORT = ${Boost_USE_STLPORT} " )
message ( STATUS "Boost_USE_STLPORT_DEPRECATED_NATIVE_IOSTREAMS = ${Boost_USE_STLPORT_DEPRECATED_NATIVE_IOSTREAMS} " )
message ( STATUS "Boost_COMPILER = ${Boost_COMPILER} " )
message ( STATUS "Boost_LIB_PREFIX = ${Boost_LIB_PREFIX} " )
message ( STATUS "Boost_ARCHITECTURE = ${Boost_ARCHITECTURE} " )
message ( STATUS "Boost_THREADAPI = ${Boost_THREADAPI} " )
message ( STATUS "Boost_NAMESPACE = ${Boost_NAMESPACE} " )
message ( STATUS "Boost_DEBUG = ${Boost_DEBUG} " )
message ( STATUS "Boost_REALPATH = ${Boost_REALPATH} " )
message ( STATUS "Boost_LIBRARY_DIR = ${Boost_LIBRARY_DIR} " )
message ( STATUS "Boost_NO_WARN_NEW_VERSIONS = ${Boost_NO_WARN_NEW_VERSIONS} " )
message ( STATUS "ENV{BOOST_ROOT} = $ENV{BOOST_ROOT} " )
message ( STATUS "ENV{BOOST_LIBRARYDIR} = $ENV{BOOST_LIBRARYDIR} " )

list ( APPEND PRJ_INCLUDE_DIRS ${Boost_INCLUDE_DIRS} )
list ( APPEND PRJ_LIBRARIES ${Boost_LIBRARIES} )

add_executable ( ${PROJECT_NAME}
    main.cpp
)

target_include_directories ( ${PROJECT_NAME}
    PRIVATE 
        ${PRJ_INCLUDE_DIRS}
)

target_link_libraries( ${PROJECT_NAME} 
    PRIVATE 
        ${PRJ_LIBRARIES}
)

target_compile_features ( ${PROJECT_NAME} 
    PRIVATE 
        ${PRJ_COMPILE_FEATURES}
)