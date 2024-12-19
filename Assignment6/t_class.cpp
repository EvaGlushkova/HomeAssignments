#include "t_class.h"
#include <iostream>
#include <vector>


bool Class1::bar(int n, std::vector<float>& v)
{
    return n > 0;
}

int Class1::c_1_1()
{
    return 1 * 1;
}

float Class1::c_1_2()
{
    return static_cast<float>(1 * 2);
}

void Class1::c_1_3()
{
    std::cout << "c_1_3\n";
}



bool Class2::bar(int n, std::vector<float>& v)
{
    return !v.empty();
}

int Class2::c_2_1()
{
    return 2 * 1;
}

float Class2::c_2_2()
{
    return static_cast<float>(2 * 2);
}

void Class2::c_2_3()
{
    std::cout << "c_2_3\n";
}



bool Class3::bar(int n, std::vector<float>& v)
{
    return n == (-1) * static_cast<int>(v.size());
}

int Class3::c_3_1()
{
    return 3 * 1;
}

float Class3::c_3_2()
{
    return static_cast<float>(3 * 2);
}

void Class3::c_3_3()
{
    std::cout << "c_3_3\n";
}

