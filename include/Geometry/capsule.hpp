#pragma once
#include<Eigen/Core>

struct capsule {
    Eigen::Vector3d p0;
    Eigen::Vector3d p1;
    double r;
};