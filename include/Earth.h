#ifndef EARTH_H
#define EARTH_H

#include <vector>
#include <Land.h>

using namespace std;


class Earth
{
    public:
        void run();
        void step();
        Land::Weather calculateWeather(float humidity);

        void listLands();

        Earth(const string &filename);
        virtual ~Earth();

    protected:
        float _humidity;
    private:
        vector<Land *> _lands;
};

#endif // EARTH_H
