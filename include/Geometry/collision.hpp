#pragma once
#include<Eigen/Core>
#include "capsule.hpp"
#include "sphere.hpp"

bool capsule_sphere_collide(const capsule& cap , const sphere& sph);