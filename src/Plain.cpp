#include <iostream>
#include "Plain.h"

using namespace std;

string Plain::get_type(){
    return "p";
}
float Plain::update(Weather w){
    if(w == Land::Weather::Sunny){
        _water = _water - 3;
    }else if(w == Land::Weather::Cloudy){
        _water = _water - 1;
    }else{
        _water = _water + 5;
    }

    return 1.03;
}

string Plain::change_to() {
    if(_water > 15) return "z";

    return get_type();
}

void Plain::print(){
    cout << _name << " | " << get_type() << " | " << _water << endl;
}

Plain::Plain(string name, float water) : Land (name, water){
}

Plain::~Plain()
{
    //dtor
}
