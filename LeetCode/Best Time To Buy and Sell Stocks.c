#include<limits.h>

int maxProfit(int* prices, int pricesSize){
    int min_price = INT_MAX;
    int profit = 0;
    
    for (int i = 0; i < pricesSize; i++){
        if (*(prices+i) < min_price)
            min_price = *(prices+i);
        else if (*(prices+i) - min_price > profit)
            profit = *(prices+i) - min_price;
    }
    return profit;
}