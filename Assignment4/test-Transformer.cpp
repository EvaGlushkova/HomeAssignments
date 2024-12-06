/* Glushkova Eva st108255@student.spbu.ru
4th test project */

#include "gtest/gtest.h"

#include "Transformer.h"
#include "Optimus_Prime.h"
#include "Bumblebee.h"
#include "Jazz.h"

#include <sstream>


int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}

TEST(Transformer, Optimus_Prime_test)
{
    Optimus_Prime* optimus = new Optimus_Prime();
    ASSERT_STREQ(optimus->getForm().c_str(), "normal");
    ASSERT_TRUE(optimus->jump());
    delete optimus;
}

TEST(Transformer, Stream)
{
    Transformer* tr = new Transformer(1, 2, 3, 4);
    std::string s = "Level: 1 Strength: 2 Range: 3 Ammo: 4\n";
    std::ostringstream out;
    out << *tr;
    EXPECT_EQ(out.str(), s);
    delete tr;
}

TEST(Transformer, LessGreat)
{
    Transformer tr1(1, 2, 3, 4);
    Transformer tr2(2, 3, 4, 5);
    EXPECT_TRUE(tr1 < tr2);
    EXPECT_FALSE(tr1 > tr2);

}

TEST(Transformer, Bumblebee_test)
{
    Bumblebee* bumblebee = new Bumblebee();
    ASSERT_STREQ(bumblebee->getSeason().c_str(), "first");
    ASSERT_TRUE(bumblebee->transform());
    delete bumblebee;
}

TEST(Transformer, Bumblebee_test_EQ)
{
    Bumblebee* bumblebee1 = new Bumblebee();
    Bumblebee* bumblebee2 = new Bumblebee();
    bumblebee1.setVision(1);
    bumblebee2.setVision(2);
    EXPECT_TRUE(tr1 < tr2);
    EXPECT_FALSE(tr1 > tr2);
    delete bumblebee1;
    delete bumblebee2;
}

TEST(Transformer, Jazz_test)
{
    Jazz* jazz = new Jazz();
    ASSERT_STREQ(jazz->getForm().c_str(), "normal");
    ASSERT_TRUE(jazz->jump());
    delete jazz;
}

TEST(Transformer, Jazz_test_EQ)
{
    Jazz* jazz1 = new Jazz();
    Jazz* jazz2 = new Jazz();
    jazz1.setForm(1);
    jazz2.setForm(2);
    EXPECT_TRUE(jazz1 < jazz2);
    EXPECT_FALSE(jazz1 > jazz2);
    delete jazz1;
    delete jazz2;
}




