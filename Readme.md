3D collision checker  in C++17 (spheres, capsules, 3-link robot kinematics).
---------------------------------------
            Structure:
---------------------------------------
MiniCollisionChecker/
|
|--CMakeLists.txt
|
|--include/
    |--Geometry
        |--capsule.hpp
        |--collision.hpp
        |--sphere.hpp
    |--Robot
        |--forwardkinematics.hpp
        |--Robot3D.hpp
        |--RobotCollide.hpp

|--src
    |--collision.cpp
    |--forwardkinematics.cpp
    |--Robot3D.cpp
    |--RobotCollide.cpp
    |--main.cpp

---------------------------------------
        Build Instructions:
---------------------------------------
1/Create a new folder next to the CMakeLists.txt file.
2/In this folder execute: [cmake ..] then [ make ] or equivalent commands [] depending on your settings. 
3/Execute the executable "collision_checker.exe" 

The provided "src/main.cpp" demonstrates a simple test:
---------------------------------------
            src/main.cpp
---------------------------------------
1/initialision of the environment: 3‑segment robot (capsules) + sphere obstacle
2/Check for collision : prints collision= 0(False) or collision=1(True) 
3/Computes new joint positions using forward kinematics ante updates the robot capsules position.
4/check again for collision and prints the collision status.

---------------------------------------
            Features:
---------------------------------------
3D geometry (Eigen)
3‑link robot model
Forward kinematics (3D)
Robot–sphere obstacle collision checking

---------------------------------------
           Requirements:
---------------------------------------
C++17
Eigen3
CMake >= 3.16