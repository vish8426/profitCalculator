#include <stdio.h>

// Create Function for Best Times to Buy & Sell
int profit(int array[], int size)
{
    // Handle Empty or Single Element Arrays
    if(!array || size <= 1) return 0;
    
    // Define Variables
    int minPrice = array[0];
    int maxProfit = 0;

    // Unroll Loop for better CPU Pipeline
    int i; 

    // Single Pass Solution
    for(i=1; i<size; i++) 
    {
        // Update Minimum Price upto this Time
        if(array[i] < minPrice)
        {
            minPrice = array[i];
        }
        
        // Check if Selling at Current Price gives better Profit
        int currentProfit = array[i] - minPrice;
        if(currentProfit > maxProfit)
        {
            maxProfit = currentProfit;
        }
    }

    return maxProfit;
}