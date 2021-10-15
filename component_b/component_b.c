#include "component_b.h"

#include <stdbool.h>

static bool init_completed = false;
static uint32_t base = 0;

void component_b_init(uint32_t new_base)
{
    init_completed = true;
    base = new_base;
}

uint32_t component_b_add(uint32_t in)
{
    uint32_t ret = 0;
    if (init_completed)
        ret = base + in;
    return ret;
}

void component_b_deinit(void)
{
    init_completed = false;
}