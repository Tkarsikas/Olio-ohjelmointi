cmake_minimum_required(VERSION 3.19)
project(H6b LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(H6b
    main.cpp
    exampleclass.h exampleclass.cpp
)

target_link_libraries(H6b
    PRIVATE
        Qt::Core
)
target_link_libraries(H6b PRIVATE Qt6::Core)

include(GNUInstallDirs)

install(TARGETS H6b
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
