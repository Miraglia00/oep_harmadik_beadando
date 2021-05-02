#include <iostream>
#include "Plain.h"

using namespace std;

string Plain::get_type(){
    return "p";
}
void Plain::update(Weather w){}

void Plain::print(){
    cout << _name << " | " << get_type() << " | " << _water << endl;
}

Plain::Plain(string name, float water) : Land (name, water){
}

Plain::~Plain()
{
    //dtor
}
