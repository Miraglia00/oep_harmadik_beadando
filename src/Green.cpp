#include <iostream>
#include "Green.h"

using namespace std;

string Green::get_type(){
    return "z";
}
void Green::update(Weather w){}

void Green::print(){
    cout << _name << " | " << get_type() << " | " << _water << endl;
}

Green::Green(string name, float water) : Land (name, water){
}

Green::~Green()
{
    //dtor
}
