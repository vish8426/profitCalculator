#include <stdio.h>
#include "main.h"

// Main Program Loop & Entrypoint
int main()
{
    // Define Variables 
    int result;
    int prices[] = {7,1,5,3,6,4};
    int size = sizeof(prices)/sizeof(prices[0]);

    // printf("Size: %d\n", size);
    printf("Prices Array: ");

    for(int i=0; i<size; i++)
    {
        printf("%d ", prices[i]);
    }

    result = profit(prices, size);
    printf("\nCalculated Profit: %d\n", result);

    return 0;
}