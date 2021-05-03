#include "Land.h"

using namespace std;

void Land::print(){}

string Land::get_name() {
    return _name;
}

float Land::get_water() {
    return _water;
}

Land::Land(string name, float water){
    _name = name;
    _water = water;
}

Land::~Land()
{
    //dtor
}
