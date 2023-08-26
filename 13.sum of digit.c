#include <stdio.h>
int sumOfDigits(int num) 
{
    int sum = 0;
    while (num > 0) 
	{
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main() 
{
    int n,i,j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 1) 
	{
        printf("Invalid input.\n");
        return 1;
    }
    int nums[n];
    printf("Enter the positive integers:\n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &nums[i]);
        if (nums[i] <= 0) 
		{
            printf("Invalid input.\n");
            return 1;
        }
    }
    int maxSum = 0;
    for ( i = 0; i < n; i++) 
	{
        for ( j = i + 1; j < n; j++) 
		{
            if (sumOfDigits(nums[i]) == sumOfDigits(nums[j])) 
			{
                int currentSum = nums[i] + nums[j];
                if (currentSum > maxSum) 
				{
                    maxSum = currentSum;
                }
            }
        }
    }
    printf("Maximum sum with equal digit sums: %d\n", maxSum);
    return 0;
}
