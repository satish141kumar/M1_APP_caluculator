#include "stdio.h"
#include "string.h"


/* Prototypes for all the test functions */
void test_signup(void);
void test_login(void);
void test_grand_total(void);

void setUp(){}
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */

  RUN_TEST(test_signup);
  RUN_TEST(test_login);
  RUN_TEST(test_grand_total);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_total_bill(void){
    TEST_ASSERT_EQUAL(135, total_bill(5,27));
    TEST_ASSERT_EQUAL(25, total_bill(5,5));
}

void test_net_total(void){
    TEST_ASSERT_EQUAL(36, signup(name));
    TEST_ASSERT_EQUAL(121.5, net_total(135));
}

void test_grand_total(void){
    TEST_ASSERT_EQUAL(94.4, grand_total(80));
    TEST_ASSERT_EQUAL(165.2, grand_total(140));
    TEST_ASSERT_EQUAL(143.37, grand_total(121.5));

