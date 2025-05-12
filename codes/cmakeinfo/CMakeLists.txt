cmake_minimum_required(VERSION 4.0.2)

project ( testprj )

find_package ( BOOST )

get_directory_property( my_import_targets DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} IMPORTED_TARGETS )
message( STATUS "my_import_targets=${my_import_targets}" )
