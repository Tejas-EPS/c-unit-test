#include "CppUTest/TestHarness.h"

extern "C"{
	#include "sumvalue.h"
}

//Create a test group
TEST_GROUP(sum_test_group)
{
	void setup()
	{
		//Initialize befire each test
	}
	
	void teardown()
	{
		//Deinitialize after each test
	}	
};


// Test the average function
TEST(sum_test_group, simple_test_range1)
{
	float array[] = {1.0,2.0,3.5,4.0,5.5};
	float sum = sumvalue(array, 5);
	CHECK_EQUAL(sum, 16.0);
}


// Test null array
TEST(sum_test_group, simple_test_range2)
{
	float array[] = {-1.0,-2.0,-3.5,-4.0,-5.5};
	float sum = sumvalue(array, 5);
	CHECK_EQUAL(sum, -16.0);
}