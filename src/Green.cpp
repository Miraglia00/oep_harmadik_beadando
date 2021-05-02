#include "Green.h"

std::string Green::get_type(){
    return "z";
}
void Green::update(Weather w){}

Green::Green(std::string name, float water) : Land (name, water){
}

Green::~Green()
{
    //dtor
}
