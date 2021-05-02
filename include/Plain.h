#ifndef PLAIN_H
#define PLAIN_H

#include <Land.h>


class Plain : Land
{
    public:
        virtual std::string get_type();
        virtual void update(Weather w);
        virtual void print();
        virtual float get_humidity();
        virtual void set_humidity(float hum);

        Plain(std::string name, float water);
        virtual ~Plain();

    protected:

    private:
};

#endif // PLAIN_H
