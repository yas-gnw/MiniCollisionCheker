#include "Robot/forwardkinematics.hpp "
#include "Robot/robot3D.hpp "
#include<Eigen/Core>
#include <Eigen/Geometry>
#include<iostream>
#include<array>
#include<cmath>


std::array<Eigen::Vector3d,4> forwardkinematics(const Robot3D& bot , double t1,double t2,double t3){
    std::cout<<"Computing new joints positions for the new joints angles commands: theta1="<<t1<<"rad theta2="
    <<t2<<"rad theta3="<<t3<<"rad\n";
    Eigen::Vector3d p0(0,0,0);
    Eigen::Matrix3d R1= Eigen::AngleAxisd(t1,Eigen::Vector3d::UnitZ()).toRotationMatrix();
    Eigen::Matrix3d R2= Eigen::AngleAxisd(t2,Eigen::Vector3d::UnitY()).toRotationMatrix();
    Eigen::Matrix3d R3= Eigen::AngleAxisd(t3,Eigen::Vector3d::UnitY()).toRotationMatrix();
    auto L1_=(bot.L1.p1-bot.L1.p0).norm();
    auto L2_=(bot.L2.p1-bot.L2.p0).norm();
    auto L3_=(bot.L3.p1-bot.L3.p0).norm();
    Eigen::Vector3d p1 = p0 + R1*Eigen::Vector3d(L1_,0,0);
    Eigen::Vector3d p2 = p1 + (R1*R2)*Eigen::Vector3d(L2_,0,0);
    Eigen::Vector3d p3 = p2 + (R1*R2*R3)*Eigen::Vector3d(L3_,0,0);
    return  {p0,p1,p2,p3};

}