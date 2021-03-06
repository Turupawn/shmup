#include "TransparencyEffect.h"

void TransparencyEffect::init()
{
    this->current_percentage = 1.0;
    this->target_percentage = this->current_percentage;
    this->change_speed = 0;
}

void TransparencyEffect::set(double target_percentage, double change_speed)
{
    this->target_percentage = target_percentage;
    this->change_speed = change_speed;
    this->update();
}

void TransparencyEffect::update()
{
    if(current_percentage < target_percentage)
    {
       current_percentage += change_speed;
       if(current_percentage > target_percentage)
       {
           current_percentage = target_percentage;
       }
    }
    if(current_percentage > target_percentage)
    {
       current_percentage -= change_speed;
       if(current_percentage < target_percentage)
       {
           current_percentage = target_percentage;
       }
    }
}
