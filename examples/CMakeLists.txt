cmake_minimum_required(VERSION 3.20)
project(VeilEngineExample)

set(CMAKE_CXX_STANDARD 17)

# Добавляем исполняемый файл
add_executable(VeilEngineExample src/main.cpp)

# Подключаем заголовки
target_include_directories(VeilEngineExample PRIVATE include)

target_link_directories(VeilEngineExample PRIVATE lib)
# Линкуем с библиотекой (замени STATIC на SHARED, если хочешь DLL/.so)
target_link_libraries(VeilEngineExample PRIVATE Veil)
