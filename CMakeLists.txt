cmake_minimum_required(VERSION 3.26)
project(Task_2v2_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Task_2v2_1
        Book.cpp
        Book.h
        ItemsInLibrary.cpp
        ItemsInLibrary.h
        Librarian.cpp
        Librarian.h
        LibraryCustomer.cpp
        LibraryCustomer.h
        DigitalMedia.cpp
        DigitalMedia.h
        Journal.cpp
        Journal.h
        Magazine.cpp
        Magazine.h
        main.cpp)
