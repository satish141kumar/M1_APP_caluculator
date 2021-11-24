#include "unity.h"
#include "unity_internals.h"
#include<stdio.h>
#include "main.h"
#include "b.h"




	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_checkWin(void)
	{
  		TEST_ASSERT_EQUAL(0, checkWin());
  		TEST_ASSERT_EQUAL(1, checkWin());
        TEST_ASSERT_EQUAL(-1, checkWin());                         

	}

               

	int main()
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_checkWin);

  		return UNITY_END();
	}