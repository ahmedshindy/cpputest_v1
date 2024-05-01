#include <iostream>
#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTestExt/MockSupport.h"
#include "CppUTest/TestHarness.h"
using namespace std;
TEST_GROUP(FirstTestGroup)
{
};

TEST(FirstTestGroup, FirstTest)
{
   FAIL("Fail me!");
}
TEST(FirstTestGroup, SecondTest)
{
   STRCMP_EQUAL("hello", "world");
   LONGS_EQUAL(1, 2);
   CHECK(false);
}
int main(int ac, char** av)
{
   std::cout<<"Hello CppUtest"<<endl;
   return CommandLineTestRunner::RunAllTests(ac, av);
}