#include <iostream>
#include "Green.h"

using namespace std;

string Green::get_type(){
    return "z";
}
float Green::update(Weather w){
    if(w == Land::Weather::Sunny){
        _water = _water - 6;
    }else if(w == Land::Weather::Cloudy){
        _water = _water - 2;
    }else{
        _water = _water + 10;
    }

    if(_water < 0) _water = 0;

    return 1.07;
}

string Green::change_to(){
    if(_water > 50) return "t";
    else if(_water < 16) return "p";
    else return get_type();
}

void Green::print(){
    cout << _name << " | " << get_type() << " | " << _water << endl;
}

Green::Green(string name, float water) : Land (name, water){
}

Green::~Green()
{
    //dtor
}
