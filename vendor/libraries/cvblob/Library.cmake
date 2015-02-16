file(GLOB DUNE_cvblob_FILES
  vendor/libraries/cvblob/*.cpp)

set_source_files_properties(${DUNE_cvblob_FILES}
  PROPERTIES COMPILE_FLAGS "${DUNE_CXX_FLAGS} ${DUNE_CXX_FLAGS_STRICT}")

list(APPEND DUNE_VENDOR_FILES ${DUNE_cvblob_FILES})
