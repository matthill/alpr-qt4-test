
cmake_minimum_required (VERSION 2.6)


FIND_PACKAGE(Qt4 REQUIRED)


INCLUDE(${QT_USE_FILE})

ADD_EXECUTABLE( qt_test  main.cpp )
    TARGET_LINK_LIBRARIES(qt_test
      openalpr
     ${QT_LIBRARIES}
    )
