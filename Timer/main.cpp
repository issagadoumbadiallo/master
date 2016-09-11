#include <iostream>
#include "include/GlobalConst.h"
/*
#include <iomanip>
#include <chrono>
#include <ctime>
*/
#include <thread>


void f()
{
    volatile double d = 0;
    for(int n=0; n<10000; ++n)
        for(int m=0; m<10000; ++m)
            d += d*n*m;
}


int main() {

    d.restart();

    std::thread t1(f);
    std::thread t2(f); // f() is called on two threads
    std::thread t3(f); // f() is called on two threads
    t1.join();
    t2.join();
    t3.join();

    d.end();
    d.show_all();

    return 0;
}

