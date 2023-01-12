
#include <iostream>
#include "Timer.h"

int main()
{
    std::cout << "Hello World!\n";

    Timer* timer = Timer::GetInstance();

    printf_s("Msec Test 1: %d\n", timer->GetMSecTicks());
    printf_s("Usec Test 1: %d\n", timer->GetUSecTicks());
    timer->MSecSleep(2);
    printf_s("Msec Test 2: %d\n", timer->GetMSecTicks());
    printf_s("Usec Test 2: %d\n", timer->GetUSecTicks());

    timer->ReleaseInstance();
}
