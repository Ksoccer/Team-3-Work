#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "Faults.h"

int maxi(int i1, int i2)
{
    return (i1 > i2) ? i1 : i2;
}

void test_UnderVoltage(void)
{
    CU_ASSERT(UnderVoltage(9.0,20) == 1);
    CU_ASSERT(UnderVoltage(10.0,20) == 0);
    CU_ASSERT(UnderVoltage(9.0,19) == 0);
}

int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("test_UnderVoltage", 0, 0);

    CU_add_test(suite, "test_UnderVoltage", test_UnderVoltage);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
