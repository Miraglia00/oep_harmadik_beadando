#ifndef PLAIN_H
#define PLAIN_H

#include <Land.h>


class Plain : Land
{
    public:
        virtual std::string get_type();
        virtual void update(Weather w);

        Plain(std::string name, float water);
        virtual ~Plain();

    protected:

    private:
};

#endif // PLAIN_H
