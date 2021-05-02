#include "Earth.h"
#include "Plain.h"
#include "Green.h"
#include "Lake.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

using namespace std;

void Earth::run(){}

void Earth::step(){}

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
        if(type == "z") _lands.push_back(new Green(name, water));
        else if(type == "t") _lands.push_back(new Lake(name, water));
        else if(type == "p") _lands.push_back(new Plain(name, water));
        else throw "Not valid type!";
    }
    f >> _humidity;

    f.close();
}

void Earth::listLands(){
    for(size_t i = 0; i < _lands.size(); i++) {
        _lands[i]->print();
    }

    Land::Weather w = calculateWeather(_humidity);
}

Land::Weather Earth::calculateWeather(float humidity){
    if(humidity > 70) {

        _humidity = 30;
        return Land::Weather::Rainy;

    }else if(humidity > 40 && humidity < 70){
        int r = rand() % 100 + 1;

        if(r < ((_humidity-40) * 3.3)){
             _humidity = 30;
            return Land::Weather::Rainy;
        }else return Land::Weather::Cloudy;

    }else return Land::Weather::Sunny;
}


Earth::~Earth()
{
    //dtor
}
