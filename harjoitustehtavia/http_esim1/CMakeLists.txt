cmake_minimum_required(VERSION 3.19)
project(Http_esim1 LANGUAGES CXX)


find_package(Qt6 REQUIRED COMPONENTS Core Network)

qt_standard_project_setup()

qt_add_executable(Http_esim1
    main.cpp
    httpperson.h httpperson.cpp
    environment.h environment.cpp
)

target_link_libraries(Http_esim1
    PRIVATE
        Qt::Core
        Qt::Network
)
target_link_libraries(Http_esim1 PRIVATE Qt6::Core)

include(GNUInstallDirs)

install(TARGETS Http_esim1
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
