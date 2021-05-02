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
        virtual float get_humidity();
        virtual void set_humidity(float hum);

    protected:
        std::string _name;
        float _water;
        inline static float _humidity = 100;
    private:
};

#endif // LAND_H
