#include "gtest/gtest.h"

#include "Transformer.h"
#include "Optimus_Prime.h"
#include "Bumblebee.h"
#include "Jazz.h"


int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    
    return RUN_ALL_TESTS();
}

TEST(Transformer, Optimus_Prime_test){
    Optimus_Prime* optimus = new Optimus_Prime();
    ASSERT_STREQ(optimus->getForm().c_str(), "normal");
    ASSERT_TRUE(optimus->jump());
    delete optimus;
}

TEST(Transformer, Bumblebee_test){
    Bumblebee* bumblebee = new Bumblebee();
    ASSERT_STREQ(bumblebee->getSeason().c_str(), "first");
    ASSERT_TRUE(bumblebee->transform());
    delete bumblebee;
}

TEST(Transformer, Jazz_test){
    Jazz* jazz = new Jazz();
    ASSERT_STREQ(jazz->getForm().c_str(), "normal");
    ASSERT_TRUE(jazz->jump());
    delete jazz;
}




