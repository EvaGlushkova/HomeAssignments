/* Glushkova Eva st108255@student.spbu.ru
problem 6 */

#ifndef T_CLASS_H
#define T_CLASS_H

#include <vector>
#include <iostream>


template <typename T>
class T_class
{
private:
    T param;
    int n;
    std::vector<float> v;
public:

    T_class(T init_param, int init_n, std::vector<float>& init_v) : param(init_param), n(init_n), v(init_v) {}

    bool foo()
    {
        return param.bar(n, v);
    }

};

template <>
class T_class<int>
{
private:
    int param;
    int n;
    std::vector<float>& v;
public:
    T_class(int init_param, int init_n, std::vector<float>& init_v) : param(init_param), n(init_n), v(init_v) {};

    bool foo()
    {
        return true;
    }

};

template <>
class T_class<double>
{
private:
    double param;
    int n;
    std::vector<float>& v;
public:
    T_class(double init_param, int init_n, std::vector<float>& init_v): param(init_param), n(init_n), v(init_v) {};

    bool foo()
    {
        return false;
    }
};

class Class1
{
public:
    bool bar(int n, std::vector<float>& v);
    int c_1_1();
    float c_1_2();
    void c_1_3();
};

class Class2
{
public:
    bool bar(int n, std::vector<float>& v);
    int c_2_1();
    float c_2_2();
    void c_2_3();
};

class Class3
{
public:
    bool bar(int n, std::vector<float>& v);
    int c_3_1();
    float c_3_2();
    void c_3_3();
};


#endif
