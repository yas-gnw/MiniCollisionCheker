#include"Robot/robot3D.hpp"
#include<Eigen/Core>
#include"Geometry/capsule.hpp"
#include<array>
#include<iostream>
Robot3D::Robot3D(const std::array<Eigen::Vector3d,4>& Pos , double r_){
    L1.p0=Pos[0];
    L1.p1=Pos[1];
    L1.r=r_;
    L2.p0=Pos[1];
    L2.p1=Pos[2];
    L2.r=r_;
    L3.p0=Pos[2];
    L3.p1=Pos[3];
    L3.r=r_;

    //print joints positions
    std::cout<<"bot created/joints positions: ";
    for(int k=0;k<=3;k++){
        std::cout<<"p"<<k<<"=";
        for(int i =0;i<=2;i++)
            std::cout<<Pos[k][i]<<" ";
        std::cout<<"\t";
    }
    std::cout<<"\n\n";
}
void Robot3D::Update(const std::array<Eigen::Vector3d,4>& Pos , double r_){
    L1.p0=Pos[0];
    L1.p1=Pos[1];
    L1.r=r_;
    L2.p0=Pos[1];
    L2.p1=Pos[2];
    L2.r=r_;
    L3.p0=Pos[2];
    L3.p1=Pos[3];
    L3.r=r_;

    //print new postions
    std::cout<<"bot updated/new joints positions: ";
    for(int k=0;k<=3;k++){
        std::cout<<"p"<<k<<"=";
        for(int i =0;i<=2;i++)
            std::cout<<Pos[k][i]<<" ";
        std::cout<<"\t";
    }
    std::cout<<"\n\n";
}