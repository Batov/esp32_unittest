#include "component_b.h"
#include "unity.h"

static const char test_tag[] = "[component_b]";

TEST_CASE("B 1", test_tag)
{
    TEST_ASSERT_EQUAL(component_b_add(1), 0);
}

TEST_CASE("B 2", test_tag)
{
    component_b_init(11);
    TEST_ASSERT_EQUAL(component_b_add(1), 12);
}