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

    cout << l.get_type() << p.get_type() << g.get_type();
    return 0;
}
