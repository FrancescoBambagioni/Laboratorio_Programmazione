cmake_minimum_required(VERSION 3.24)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_STANDARD 17)

project(Laboratorio_Programmazione)

include_directories(headers /usr/include C:/Workspace/SFML-32-bit/include)

set(SFML_DIR "C:/Workspace/SFML-32-bit/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
add_executable(Laboratorio_Programmazione main.cpp Weapon.h Weapon.cpp Patterns/Observer.h Patterns/Subject.h Characters/GameCharacter.h Characters/GameCharacter.cpp Characters/Hero.h Characters/Hero.cpp Characters/Enemy.h Characters/Enemy.cpp)
target_link_libraries(Laboratorio_Programmazione sfml-system sfml-window sfml-graphics sfml-audio sfml-network)