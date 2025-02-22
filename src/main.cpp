#include <stdio.h>

#include "main.h"

// Main Program Loop & Entrypoint
int main()
{
    // Define Variables 
    int result;
    int prices[] = {7,6,4,3,1};
    int size = sizeof(prices)/sizeof(prices[0]);

    // printf("Size: %d\n", size);
    fprintf(stdout, "Prices Array: ");

    for(int i=0; i<size; i++)
    {
        fprintf(stdout, "%d ", prices[i]);
    }

    result = profit(prices, size);
    fprintf(stdout, "\nCalculated Profit: %d\n", result);

    return 0;
}