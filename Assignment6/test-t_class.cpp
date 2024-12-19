#include "gtest/gtest.h"

#include "t_class.h"

#include <sstream>
#include <cassert>



int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(T, Class1_true)
{
    Class1 param_1;
    std::vector<float> v = {5.0f};
    T_class<Class1> t(param_1, 10, v);
    EXPECT_TRUE(t.foo());
}

TEST(T, Class1_false)
{
    Class1 param_1;
    std::vector<float> v = {5.0f};
    T_class<Class1> t(param_1, -10, v);
    EXPECT_FALSE(t.foo());
}

TEST(T, Class2_true)
{
    Class2 param_2;
    std::vector<float> v = {5.0f};
    T_class<Class2> t(param_2, 0, v);
    EXPECT_TRUE(t.foo());
}

TEST(T, Class2_false)
{
    Class2 param_2;
    std::vector<float> v;
    T_class<Class2> t(param_2, 1, v);
    EXPECT_FALSE(t.foo());
}

TEST(T, Class3_true)
{
    Class3 param_3;
    std::vector<float> v = {5.0f};
    T_class<Class3> t(param_3, -1, v);
    EXPECT_TRUE(t.foo());
}

TEST(T, Class3_false)
{
    Class3 param_3;
    std::vector<float> v = {5.0f, 1.0f};
    T_class<Class3> t(param_3, 1, v);
    EXPECT_FALSE(t.foo());
}

TEST(T_class, INT)
{
    std::vector<float> v = {1.0f};
    T_class<int> t(1, 0, v);
    EXPECT_TRUE(t.foo());
}

TEST(T_class, DOUBLE)
{
    std::vector<float> v;
    T_class<double> t(2.0, 0, v);
    EXPECT_FALSE(t.foo());
}

