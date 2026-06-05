#include<iostream>
#include "Geometry/sphere.hpp"
#include<Eigen/Core>
#include "Robot/RobotCollide.hpp"
#include<cmath>
#include "Robot/forwardkinematics.hpp"
#include "Robot/robot3D.hpp"
#include<array>
#include<cmath>

int main(){
    //Create sphere obstacle
    sphere S(Eigen::Vector3d(2.0,2.0,2.0),2.0);
    
    //bot creation
    std::array<Eigen::Vector3d,4> Pos_init={Eigen::Vector3d(0,0,0),Eigen::Vector3d(2,0,0),Eigen::Vector3d(4,0,0),Eigen::Vector3d(6,0,0)}; 
    Robot3D Bot(Pos_init,0.5);
    
    //check collision and print collision=1 if collision 0 if not
    std::cout<<"collision="<<RobotCollide(Bot, S)<<"\n\n";
    
    //move the robot:
    //Calculate the absolute new positions of the joints after command joint angles t1,t2,t3:
    double t1=40*M_PI/180.0,t2=-30*M_PI/180.0,t3=-30*M_PI/180.0;
    std::array<Eigen::Vector3d,4> Pos = forwardkinematics(Bot,t1,t2,t3);
    
    
    //Update joints  positions:
    Bot.Update(Pos,0.5);
    
    

    //check collision and print collision=1 if collision 0 if not
    std::cout<<"collision="<<RobotCollide(Bot, S)<<"\n"<<std::endl;

    return 0;
}