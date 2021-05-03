#ifndef PLAIN_H
#define PLAIN_H

#include <Land.h>


class Plain : public Land
{
    public:
        virtual std::string get_type();
        virtual float update(Weather w);
        virtual std::string change_to();
        virtual void print();

        Plain(std::string name, float water);
        virtual ~Plain();

    protected:

    private:
};

#endif // PLAIN_H
