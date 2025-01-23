# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\komunikatorCxx_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\komunikatorCxx_autogen.dir\\ParseCache.txt"
  "komunikatorCxx_autogen"
  )
endif()
