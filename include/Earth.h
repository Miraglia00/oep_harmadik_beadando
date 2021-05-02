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
        void calculateHumidity();

        Earth(const string &filename);
        virtual ~Earth();

    protected:

    private:
        vector<Land *> _lands;
};

#endif // EARTH_H
