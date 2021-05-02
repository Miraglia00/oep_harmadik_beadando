#include <iostream>
#include "Plain.h"

using namespace std;

string Plain::get_type(){
    return "p";
}
void Plain::update(Weather w){}

float Plain::get_humidity(){
    Land::get_humidity();
}
void Plain::set_humidity(float hum) {
    Land::set_humidity(hum);
}

void Plain::print(){
    cout << _name << " | " << get_type() << " | " << _water << " | " << get_humidity() << endl;
}

Plain::Plain(string name, float water) : Land (name, water){
}

Plain::~Plain()
{
    //dtor
}
