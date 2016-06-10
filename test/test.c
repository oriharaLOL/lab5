#include <ctest.h>
#include <diskr.h>

CTEST(equation_suite, two_roots_test)
{
    const float a = 2;
    const float b = 3;
    const float c = 1;

    float x1;
    float x2;
    roots(a, b, c, &x1, &x2);

    const float expected_x1 = -0,5;
    const float expected_x2 = -1;

    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_DBL_NEAR(expected_x2, x2);
}