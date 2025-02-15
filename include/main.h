#include <stdio.h>

// Create Function for Best Times to Buy & Sell
int profit(int array[], int size)
{
    int i, memSell, memBuy, memIndex, profit;

    memBuy = array[0];

    for(i=0; i<=size-1; i++)
    {
        if(array[i] <= memBuy)
        {
            memBuy = array[i];
            memIndex = i;
        }
    }

    if(memIndex == size-1)
    {
        return 0;
    }

    memSell = array[memIndex + 1];

    for(i=memIndex+1; i<size; i++)
    {
        if(array[i] > memSell)
        {
            memSell = array[i];
        }
    }
    
    printf("\nFunction Passed\n");
    printf("Sell Value: %d\n", memSell);
    printf("Buy Value: %d\n", memBuy);

    profit = memSell - memBuy;

    return profit;
}