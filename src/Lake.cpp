#include "Lake.h"

std::string Lake::get_type(){
    return "t";
}
void Lake::update(Weather w){}

Lake::Lake(std::string name, float water) : Land (name, water){
}

Lake::~Lake()
{
    //dtor
}
