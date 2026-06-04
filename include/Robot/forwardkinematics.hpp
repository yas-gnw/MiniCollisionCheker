#include<array>
#include<Eigen/Core>
#include<cmath>
#include"robot3D.hpp"
// function that returns an array of the position vectors of the joints.
std::array<Eigen::Vector3d,4> forwardkinematics(const Robot3D& , double t1,double t2,double t3);