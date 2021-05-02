#include <iostream>
#include "Lake.h"

using namespace std;

string Lake::get_type(){
    return "t";
}
void Lake::update(Weather w){}

float Lake::get_humidity(){
    Land::get_humidity();
}
void Lake::set_humidity(float hum){
    Land::set_humidity(hum);
}

void Lake::print(){
    cout << _name << " | " << get_type() << " | " << _water << " | " << get_humidity() << endl;
}

Lake::Lake(string name, float water) : Land (name, water){
}

Lake::~Lake()
{
    //dtor
}
