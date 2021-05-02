#include "Plain.h"

std::string Plain::get_type(){
    return "p";
}
void Plain::update(Weather w){}

Plain::Plain(std::string name, float water) : Land (name, water){
}

Plain::~Plain()
{
    //dtor
}
