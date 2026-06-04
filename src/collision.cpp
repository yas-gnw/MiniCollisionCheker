#include"Geometry/collision.hpp"
#include"Geometry/capsule.hpp"
#include"Geometry/sphere.hpp"
#include<Eigen/Core>

bool capsule_sphere_collide(const capsule& cap , const sphere& sph){
    Eigen::Vector3d proj_c_seg;
    double t = (sph.c-cap.p0).dot(cap.p1-cap.p0)/(cap.p1-cap.p0).squaredNorm();
    t=std::clamp(t,0.0,1.0);
    proj_c_seg=cap.p0+t*(cap.p1-cap.p0);
    double dist_proj=(sph.c - proj_c_seg).squaredNorm();
    double dist_allowed=(sph.r+cap.r)*(sph.r+cap.r);
    return dist_proj<= dist_allowed;
}

