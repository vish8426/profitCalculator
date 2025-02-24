#include <assert.h>
#include <stdio.h>

#include "main.h"

void test_profit() 
{
    int prices1[] = {7, 1, 5, 3, 6, 4};
    assert(profit(prices1, 6) == 5);

    int prices2[] = {7, 6, 4, 3, 1};
    assert(profit(prices2, 5) == 0);

    int prices3[] = {5};
    assert(profit(prices3, 1) == 0);

    int prices4[] = {};
    assert(profit(prices4, 0) == 0);

    int prices5[] = {1, 2, 3, 4, 5};
    assert(profit(prices5, 5) == 4);

    int prices6[] = {5, 4, 3, 2, 1};
    assert(profit(prices6, 5) == 0);

    printf("All Tests Passed Successfully.\n");
}

int main() 
{
    test_profit();

    return 0;
}
