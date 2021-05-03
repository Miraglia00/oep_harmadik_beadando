#ifndef EARTH_H
#define EARTH_H

#include <vector>
#include <Land.h>

using namespace std;


class Earth
{
    public:
        void run();
        void step(int i);
        bool is_same_type();
        Land::Weather calculate_weather(float humidity);

        void list_lands();

        Earth(const string &filename);
        virtual ~Earth();

    protected:
        float _humidity;
    private:
        vector<Land *> _lands;
};

#endif // EARTH_H
