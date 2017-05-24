#include <ctest.h>
#include "deposit.h"

CTEST(Validation_test, srok_0_OK_sum_0_FAIL)
{
    const int result = error(0,0);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validation_test, srok_366_FAIL_sum_10000_OK)
{
    const int result = error(366,10000);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validation_test, srok_366_FAIL_sum_9999_FAIL)
{
    const int result = error(366,9999);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validation_test, srok_110_OK_sum_10000_OK)
{
    const int result = error(110,10000);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validation_test, srok_220_OK_sum_100000_OK)
{
    const int result = error(220,100000);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validation_test, srok_330_OK_sum_100001_OK)
{
    const int result = error(330,100001);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validation_test, srok_365_OK_sum_10000_OK)
{
    const int result = error(365,10000 );
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validation_test, srok_negative_1_FAIL_sum_1000000_OK)
{
    const int result = error(-1,1000000);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}
