#ifndef LAKE_H
#define LAKE_H

#include <Land.h>

class Lake : Land
{
    public:
        virtual std::string get_type();
        virtual void update(Weather w);

        Lake(std::string name, float water);
        virtual ~Lake();

    protected:

    private:
};

#endif // LAKE_H