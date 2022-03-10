#include "component_a.h"
#include "unity.h"

static const char test_tag[] = "[component_a]";

TEST_CASE("A 1", test_tag)
{
    TEST_ASSERT_EQUAL(component_a_increment(1), 2);
}

TEST_CASE("A 2", test_tag)
{
    TEST_ASSERT_EQUAL(component_a_increment(100), 101);
}

TEST_CASE("A 3", test_tag)
{
    TEST_ASSERT_EQUAL(component_a_increment(0), 1);
}

TEST_CASE("A 4", test_tag)
{
    TEST_ASSERT_EQUAL(1, 1);
}