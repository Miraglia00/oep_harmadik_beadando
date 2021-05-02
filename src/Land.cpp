#include "Land.h"

std::string Land::get_type(){
    return _type;
}
void Land::update(Weather w){}

Land::Land(std::string name, float water){
    _name = name;
    _water = water;
}

Land::~Land()
{
    //dtor
}
