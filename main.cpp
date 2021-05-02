#include <iostream>
#include <Plain.h>
#include <Lake.h>
#include <Green.h>


using namespace std;

int main()
{
    Lake l("Bean", 86.0);
    Plain p("Dean", 12.0);
    Green g("Green", 26.0);
    Plain p1("Pean", 17.0);

    l.print();
    p.print();
    p.set_humidity(80);
    g.print();
    p1.print();
    return 0;
}
