#include "Land.h"

using namespace std;

void Land::update(Weather w){}

float Land::get_humidity() {
    return _humidity;
}

void Land::set_humidity(float hum){
    _humidity = hum;
}

void Land::print(){}

Land::Land(string name, float water){
    _name = name;
    _water = water;
}

Land::~Land()
{
    //dtor
}
