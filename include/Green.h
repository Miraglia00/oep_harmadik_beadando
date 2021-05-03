#ifndef GREEN_H
#define GREEN_H

#include <Land.h>

class Green : public Land
{
    public:
        virtual std::string get_type();
        virtual float update(Weather w);
        virtual void print();

        Green(std::string name, float water);
        virtual ~Green();

    protected:

    private:
};

#endif // GREEN_H
