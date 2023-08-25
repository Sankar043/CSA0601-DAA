#include <stdio.h>

int binomial_coefficient(int n, int k) {
    if (k == 0 || n == k) {
        return 1;
    }

    int dp[n+1][k+1],i,j;
    for ( i = 0; i <= n; i++) {
        for ( j = 0; j <= k; j++) {
            if (j == 0 || i == j) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
    }

    return dp[n][k];
}

int main() {
    int n, k;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (n >= 0 && k >= 0 && n >= k) {
        int result = binomial_coefficient(n, k);
        printf("Binomial coefficient C(%d, %d) = %d\n", n, k, result);
    } else {
        printf("Illegal input\n");
    }

    return 0;
}
