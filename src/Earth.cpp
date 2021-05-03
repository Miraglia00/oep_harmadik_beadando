#include "Earth.h"
#include "Plain.h"
#include "Green.h"
#include "Lake.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

using namespace std;

void Earth::run(){
    int steps = 1;
    cout << "Base values:" << endl;
    list_lands();
    cout << endl;

    while(!is_same_type()){
        cout << endl << steps << ". round:" << endl;
        for(size_t i = 0; i < _lands.size(); i++){
            step(i);
        }
        steps++;
    }
}

void Earth::step(int i){
    Land::Weather w = calculate_weather(_humidity);

    if(w == Land::Weather::Cloudy) cout << "Weather: Cloudy | Humidity: " << _humidity << endl;
    else if(w == Land::Weather::Sunny) cout << "Weather: Sunny | Humidity: " << _humidity << endl;
    else cout << "Weather: Rainy | Humidity: " << _humidity << endl;

    _humidity = _humidity * _lands[i]->update(w);

    if(_lands[i]->change_to() != _lands[i]->get_type()){

        cout << "Changing " << _lands[i]->get_name() << "[" << _lands[i]->get_type() << "] to type " << _lands[i]->change_to() << endl;
        Land *newPtr;

        if(_lands[i]->change_to() == "z") {
           newPtr = new Green(_lands[i]->get_name(), _lands[i]->get_water());
        }
        else if(_lands[i]->change_to() == "t") {
            newPtr = new Lake(_lands[i]->get_name(), _lands[i]->get_water());
        }
        else newPtr = new Plain(_lands[i]->get_name(), _lands[i]->get_water());

        delete _lands[i];

        _lands[i] = newPtr;

    }
    _lands[i]->print();
    cout << endl;
}

bool Earth::is_same_type(){
    for(size_t i = 1; i < _lands.size(); i++){
        if(_lands[0]->get_type() != _lands[i]->get_type()){
            return false;
        }
    }
    return true;
}

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

void Earth::list_lands(){
    for(size_t i = 0; i < _lands.size(); i++) {
        _lands[i]->print();
    }
}

Land::Weather Earth::calculate_weather(float humidity){
    if(humidity > 70) {

        _humidity = 30;
        return Land::Weather::Rainy;

    }else if(humidity > 40 && humidity < 70){
        int r = (rand() % 100) + 1;

        if(r < ((_humidity-40) * 3.3)){
             _humidity = 30;
            return Land::Weather::Rainy;
        }else return Land::Weather::Cloudy;

    }else return Land::Weather::Sunny;
}

Earth::~Earth()
{
    for(size_t i = 0; i < _lands.size(); i++){
        delete _lands[i];
    }
}
