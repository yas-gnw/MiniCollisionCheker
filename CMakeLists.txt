cmake_minimum_required(VERSION 3.16)
project(MiniCollisionChecker CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Trouver Eigen
find_package(Eigen3 REQUIRED)

# Bibliothèque principale
add_library(collision_lib
    src/collision.cpp
    src/RobotCollide.cpp
    src/forwardkinematics.cpp
    src/Robot3D.cpp
)

# Ajouter les includes propres à la lib
target_include_directories(collision_lib PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

# Lier Eigen
target_link_libraries(collision_lib Eigen3::Eigen)

# Exécutable
add_executable(collision_checker src/main.cpp)

# Lier la lib à l'exécutable
target_link_libraries(collision_checker collision_lib)
