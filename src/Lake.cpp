#include <iostream>
#include "Lake.h"

using namespace std;

string Lake::get_type(){
    return "t";
}
float Lake::update(Weather w){
    if(w == Land::Weather::Sunny){
        _water = _water - 10;
    }else if(w == Land::Weather::Cloudy) {
        _water = _water - 3;
    }else{
        _water = _water + 15;
    }

    if(_water < 0) _water = 0;

    return 1.10;
}

string Lake::change_to(){
    if(_water < 51) return "z";

    return get_type();
}

void Lake::print(){
    cout << _name << " | " << get_type() << " | " << _water << endl;
}

Lake::Lake(string name, float water) : Land (name, water){
}

Lake::~Lake()
{
    //dtor
}
