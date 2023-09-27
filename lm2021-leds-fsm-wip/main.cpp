#include <iostream>
#include <led.h>

led l1(1), l2(2), l3(3);


int main (int argc, char*argv[]) 
{

    l1.init();
    l2.init();
    l3.init();


    while(1) {
        l1.fsm();
        l2.fsm();
        l3.fsm();
    }

    return 0;
}