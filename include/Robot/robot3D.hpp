#pragma once
#include"Geometry/capsule.hpp"// 3 L length segments robot .
#include<Eigen/Core>
#include<array>
struct Robot3D{
    capsule L1,L2,L3 ;
    Robot3D(const std::array<Eigen::Vector3d,4>& Pos,double r);
    void Update(const std::array<Eigen::Vector3d,4>& Pos_,double r_);
};