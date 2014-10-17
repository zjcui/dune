if(DUNE_USING_QT5)
  add_executable(edgetech
    programs/edgetech/Main.cpp)

  target_link_libraries(edgetech dune-core ${DUNE_SYS_LIBS})
endif()
