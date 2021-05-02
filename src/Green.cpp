#include <iostream>
#include "Green.h"

using namespace std;

string Green::get_type(){
    return "z";
}
void Green::update(Weather w){}

float Green::get_humidity(){
    Land::get_humidity();
}
void Green::set_humidity(float hum){
    Land::set_humidity(hum);
}

void Green::print(){
    cout << _name << " | " << get_type() << " | " << _water << " | " << get_humidity() << endl;
}

Green::Green(string name, float water) : Land (name, water){
}

Green::~Green()
{
    //dtor
}
