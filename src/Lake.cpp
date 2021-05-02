#include <iostream>
#include "Lake.h"

using namespace std;

string Lake::get_type(){
    return "t";
}
void Lake::update(Weather w){}

void Lake::print(){
    cout << _name << " | " << get_type() << " | " << _water << endl;
}

Lake::Lake(string name, float water) : Land (name, water){
}

Lake::~Lake()
{
    //dtor
}
