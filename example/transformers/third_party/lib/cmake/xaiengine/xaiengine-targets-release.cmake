#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "xaiengine::xaiengine" for configuration "Release"
set_property(TARGET xaiengine::xaiengine APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(xaiengine::xaiengine PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/xaiengine.lib"
  )

list(APPEND _cmake_import_check_targets xaiengine::xaiengine )
list(APPEND _cmake_import_check_files_for_xaiengine::xaiengine "${_IMPORT_PREFIX}/lib/xaiengine.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
