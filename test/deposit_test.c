#include "ctest.h"
#include "deposit.h"

CTEST(Deposit_test, srok_0_OK_sum_10000_OK_expections_OK)
{
    const int result = deposit(0,10000);
    const int expected = 9000;
    ASSERT_EQUAL(expected, result);
}

CTEST(Deposit_test, srok_30_OK_sum_1000000_OK_expections_OK)
{
    const int result = deposit(30,1000000);
    const int expected = 900000;
    ASSERT_EQUAL(expected, result);
}

CTEST(Deposit_test, srok_60_OK_sum_100000_OK_expections_OK)
{
    const int result = deposit(60,100000);
    const int expected = 102000;
    ASSERT_EQUAL(expected, result);
}

CTEST(Deposit_test, srok_60_OK_sum_1000000_OK_expections_OK)
{
    const int result = deposit(60,1000000);
    const int expected = 1030000;
    ASSERT_EQUAL(expected, result);
}

CTEST(Deposit_test, srok_121_OK_sum_1000000_OK_expections_OK)
{
    const int result = deposit(121,100000);
    const int expected = 106000;
    ASSERT_EQUAL(expected, result);
}

CTEST(Deposit_test, srok_240_OK_sum_1000000_OK_expections_OK)
{
    const int result = deposit(240,1000000);
    const int expected = 1080000;
    ASSERT_EQUAL(expected, result);
}

CTEST(Deposit_test, srok_241_OK_sum_100000_OK_expections_OK)
{
    const int result = deposit(365,100000);
    const int expected = 112000;
    ASSERT_EQUAL(expected, result);
}

CTEST(Deposit_test, srok_365_OK_sum_1000000_OK_expections_OK)
{
    const int result = deposit(365,1000000);
    const int expected = 1150000;
    ASSERT_EQUAL(expected, result);
}

CTEST(Deposit_test, srok_365_OK_sum_100000_OK_expections_OK)
{
    const int result = deposit(365,100000);
    const int expected = 1120000;
    ASSERT_EQUAL(expected, result);
}
