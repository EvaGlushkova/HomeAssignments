#include "gtest/gtest.h"

#include "Transformer.h"
#include "Decepticon.h"
#include "Autobot.h"

#include <sstream>
#include <cassert>



int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    
    return RUN_ALL_TESTS();
}

TEST(AutobotTransform1, Transformer){
    Autobot autobot;
    std::ostringstream out;
    std::streambuf* coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(out.rdbuf());
    autobot.transform();
    std::cout.rdbuf(coutbuf);
    ASSERT_EQ(out.str(), "Autobot transform method\n");   
}

TEST(AutobotJump, Transformer){
    Autobot autobot;
    std::ostringstream out;
    std::streambuf* coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(out.rdbuf());
    autobot.jump();
    std::cout.rdbuf(coutbuf);
    ASSERT_EQ(out.str(), "Autobot jump method\n");   
}

TEST(DecepticonOpenFire, Transformer){
    Decepticon decepticon;
    std::ostringstream out;
    std::streambuf* coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(out.rdbuf());
    decepticon.openFire();
    std::cout.rdbuf(coutbuf);
    ASSERT_EQ(out.str(), "Decepticon openFire method\n");   
}

TEST(AutobotTransform2, Transformer){
    Transformer* autobot = new Autobot();
    std::ostringstream out;
    std::streambuf* coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(out.rdbuf());
    autobot->transform();
    std::cout.rdbuf(coutbuf);
    ASSERT_EQ(out.str(), "Autobot transform method\n");  
    delete autobot; 
}

TEST(DecepticonTransform, Transformer){
    Transformer* decepticon = new Decepticon();
    std::ostringstream out;
    std::streambuf* coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(out.rdbuf());
    decepticon->transform();
    std::cout.rdbuf(coutbuf);
    ASSERT_EQ(out.str(), "Decepticon transform method\n");  
    delete decepticon; 
}

TEST(Tests, Transformer){
	    std::vector<Transformer*> transf_vector;
	    transf_vector.push_back(new Autobot);
	    transf_vector.push_back(new Autobot);
	    transf_vector.push_back(new Autobot);
	    transf_vector.push_back(new Decepticon);
	    transf_vector.push_back(new Decepticon);
	    transf_vector.push_back(new Decepticon);
	    transf_vector.push_back(new Decepticon);
	    transf_vector.push_back(new Decepticon);
	    transf_vector.push_back(new Decepticon);
    
    for (int i = 0; i < 3; ++i){
    	    std::ostringstream out;
	    std::streambuf* coutbuf = std::cout.rdbuf();
	    
	    std::cout.rdbuf(out.rdbuf());
	    transf_vector[i]->transform();
	    std::cout.rdbuf(coutbuf);
	    ASSERT_EQ(out.str(), "Autobot transform method\n");
	    out.str("");
	    out.clear();
	    
	    std::cout.rdbuf(out.rdbuf());
	    transf_vector[i]->openFire();
	    std::cout.rdbuf(coutbuf);
	    ASSERT_EQ(out.str(), "Autobot openFire method\n");
	    out.str("");
	    out.clear();
	    
	    std::cout.rdbuf(out.rdbuf());
	    transf_vector[i]->jump();
	    std::cout.rdbuf(coutbuf);
	    ASSERT_EQ(out.str(), "Autobot jump method\n");
	    out.str("");
	    out.clear();  
    }
    
    for (int i = 3; i < 9; ++i){
    	    std::ostringstream out;
	    std::streambuf* coutbuf = std::cout.rdbuf();
	    
	    std::cout.rdbuf(out.rdbuf());
	    transf_vector[i]->transform();
	    std::cout.rdbuf(coutbuf);
	    ASSERT_EQ(out.str(), "Decepticon transform method\n");
	    out.str("");
	    out.clear();
	    
	    std::cout.rdbuf(out.rdbuf());
	    transf_vector[i]->openFire();
	    std::cout.rdbuf(coutbuf);
	    ASSERT_EQ(out.str(), "Decepticon openFire method\n");
	    out.str("");
	    out.clear();
	    
	    std::cout.rdbuf(out.rdbuf());
	    transf_vector[i]->jump();
	    std::cout.rdbuf(coutbuf);
	    ASSERT_EQ(out.str(), "Decepticon jump method\n");
	    out.str("");
	    out.clear();  
    }
    
    for (Transformer* i: transf_vector){
        delete i;
    }	    
	    	
}
