#pragma once
#include<Eigen/Core>
#include<iostream>

struct sphere{
    Eigen::Vector3d c; //vecteur position du centre de la sphère
    double r;          //rayon de la sphère
    sphere(const Eigen::Vector3d& c_ , double r_):c(c_),r(r_){
        std::cout<<"\nSphere obstacle with a radius r="<<r_<<" created at c=: "<<c_.transpose()<<"\n\n";
    }
};