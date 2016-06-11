#include <ctest.h>
#include <dis.h>

CTEST(equation_suite, two_roots_test)
{
    const double a = 1;
    const double b = 4;
    const double c = 3;

    double x1;
    double x2;
    dis(a, b, c);

     const double expected_x1 = -1;
     const double expected_x2 = -3;

     ASSERT_DBL_NEAR(expected_x1, x1);
     ASSERT_DBL_NEAR(expected_x2, x2);
}
CTEST(equation_suite, one_root_test)
{
    const double a = 2;
    const double b = -3;
    const double c = 2;

    double x1;
    double x2;
    dis(a, b, c);

    const double expected_x1 = 1;
    const double expected_x2 = 1;

    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_DBL_NEAR(expected_x2, x2);
}

CTEST(equation_suite, zero_a_test)
{
    const double a = 0;
    const double b = 3;
    const double c = 2;

    double x1;
    double x2;
    dis(a, b, c);

    const double expected_x1 = 0;
    const double expected_x2 = 0;

    ASSERT_EQUAL(expected_x1, x1);
    ASSERT_EQUAL(expected_x2, x2);
}