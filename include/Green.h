#ifndef GREEN_H
#define GREEN_H

#include <Land.h>

class Green : Land
{
    public:
        virtual std::string get_type();
        virtual void update(Weather w);

        Green(std::string name, float water);
        virtual ~Green();

    protected:

    private:
};

#endif // GREEN_H
