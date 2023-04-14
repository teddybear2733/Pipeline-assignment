// Application.cpp : Defines the exported functions for the DLL.
// Testing file

#include "framework.h"
#include "Application.h"
#include <iostream>

CoolClass::CoolClass(void)
{
}

int CoolClass::Calc(int a, int b)
{
    if (a == b)
    {
        return 2 * a;
    }
    else
    {
        std::cout << "This is a test";
        return a + b;
    }
    
}
