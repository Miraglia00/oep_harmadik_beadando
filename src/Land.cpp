#include "Land.h"

using namespace std;

void Land::print(){}

Land::Land(string name, float water){
    _name = name;
    _water = water;
}

Land::~Land()
{
    //dtor
}
