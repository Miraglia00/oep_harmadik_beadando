#ifndef LAKE_H
#define LAKE_H

#include <Land.h>

class Lake : public Land
{
    public:
        virtual std::string get_type();
        virtual float update(Weather w);
        virtual void print();

        Lake(std::string name, float water);
        virtual ~Lake();

    protected:

    private:
};

#endif // LAKE_H
