#include <stdio.h>
int max(int a, int b) 
{
    return (a > b) ? a : b;
}
int knapsack(int maxWeight, int weights[], int profits[], int itemCount) 
{
    int dp[itemCount + 1][maxWeight + 1];
    int i,w;
    for (i = 0; i <= itemCount; i++) 
	{
        for (w = 0; w <= maxWeight; w++) 
		{
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weights[i - 1] <= w)
                dp[i][w] = max(profits[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }   
    return dp[itemCount][maxWeight];
}
int main() 
{
    int maxWeight, itemCount,i;
    printf("Enter the knapsack weight: ");
    scanf("%d", &maxWeight);
    printf("Enter the number of items: ");
    scanf("%d", &itemCount);
    int weights[itemCount], profits[itemCount];
    printf("Enter the weights and profits of %d items:\n", itemCount);
    for (i = 0; i < itemCount; i++) 
	{
        printf("Item %d: ", i + 1);
        scanf("%d %d", &weights[i], &profits[i]);
    }
    int maxProfit = knapsack(maxWeight, weights, profits, itemCount);
    printf("Maximum profit: %d\n", maxProfit);   
    return 0;
}
