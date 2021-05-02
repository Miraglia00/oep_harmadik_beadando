#ifndef LAND_H
#define LAND_H

#include <string>

class Land
{
    public:
        enum Weather { Rainy, Sunny, Cloudy };
        Land(std::string name, float water);

        virtual ~Land();
        virtual std::string get_type() = 0;
        virtual void update(Weather w) = 0;
        virtual void print() = 0;

    protected:
        std::string _name;
        float _water;
    private:
};

#endif // LAND_H
