#include "Earth.h"
#include <iostream>
#include <fstream>

using namespace std;

void Earth::run(){}

void Earth::step(){}

void Earth::calculateHumidity(){}

Earth::Earth(const string &filename)
{
    ifstream f;
    f.open(filename);
    string name;
    string type;
    float water;
    int num = 0;
    f >> num;
    for(int i = 0; i < num; i++){
        f >> name >> type >> water;
    }




}

Earth::~Earth()
{
    //dtor
}
