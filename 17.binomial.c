#include <stdio.h>
int min(int a, int b) 
{
    return (a < b) ? a : b;
}
int binomialCoefficient(int n, int k) 
{
    int dp[n + 1][k + 1];
    int i,j;
    for ( i = 0; i <= n; i++) 
	{
        for (j = 0; j <= min(i, k); j++) 
		{
            if (j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }   
    return dp[n][k];
}
int main() 
{
    int n, k;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of k: ");
    scanf("%d", &k);
    if (k < 0 || k > n) 
	{
        printf("Invalid values of n and k.\n");
        return 1;
    }
    int result = binomialCoefficient(n, k);
    printf("%dC%d = %d\n", n, k, result);   
    return 0;
}
