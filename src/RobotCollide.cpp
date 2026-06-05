#include"Robot/RobotCollide.hpp"
#include"Geometry/collision.hpp"
#include"Geometry/capsule.hpp"
bool RobotCollide(const Robot3D& bot,const sphere& obstacle){
    return (capsule_sphere_collide(bot.L1,obstacle) ^ capsule_sphere_collide(bot.L2,obstacle)) ^ capsule_sphere_collide(bot.L3,obstacle);
}