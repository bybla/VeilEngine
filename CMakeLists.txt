cmake_minimum_required(VERSION 3.20)
project(VeilEngine)

set(CMAKE_CXX_STANDARD 17)

# Исходники движка
set(SOURCES
    src/Veil.cpp
)

# Заголовочные файлы
set(HEADERS
    include/Veil.hpp
)

option(BUILD_SHARED "Build shared library" OFF)  # Вкл/выкл динамическую библиотеку

if(BUILD_SHARED)
    add_library(Veil SHARED ${SOURCES} ${HEADERS})
else()
    add_library(Veil STATIC ${SOURCES} ${HEADERS})
endif()

target_include_directories(Veil PUBLIC include)
