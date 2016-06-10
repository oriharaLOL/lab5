#include "ctest.h"
#include <diskr.h>

CTEST(equation_suite, two_roots_test)
{
    const float a = 1;
    const float b = 4;
    const float c = 3;

    float x1;
    float x2;
    dis(a, b, c);
 
     const float expected_x1 = -1;
     const float expected_x2 = -3;
 
     ASSERT_DBL_NEAR(expected_x1, x1);
     ASSERT_DBL_NEAR(expected_x2, x2);
}
CTEST(equation_suite, one_root_test)
{
    const float a = 2;
    const float b = -3;
    const float c = 2;

    float x1;
    float x2;
    dis(a, b, c);

    const float expected_x1 = 1;

    ASSERT_DBL_NEAR(expected_x1, x1);
}

CTEST(equation_suite, zero_a_test)
{
    const float a = 0;
    const float b = 3;
    const float c = 2;

    float x1;
    float x2;
    dis(a, b, c);

    const float expected_x1 = 0;
    const float expected_x2 = 0;

    ASSERT_EQUAL(expected_x1, x1);
    ASSERT_EQUAL(expected_x2, x2);
}

CTEST(equation_suite, no_roots_test)
{
    const float a = 1;
    const float b = 1;
    const float c = 1;

    float x1;
    float x2;
    float D;
    dis(a, b, c);

    const float expected_D = 0;

    ASSERT_EQUAL(expected_D, D);
}