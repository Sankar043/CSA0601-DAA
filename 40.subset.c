#include <stdio.h>
#include <stdlib.h>
void generateSubsets(int nums[], int size) 
{
	int i;
    int numSubsets = 1 << size;
    for ( i = 0; i < numSubsets; i++) 
	{
        printf("[");
        int j;
        int first = 1;
        for ( j = 0; j < size; j++) 
		{
            if (i & (1 << j)) 
			{
                if (!first) 
				{
                    printf(", ");
                }
                printf("%d", nums[j]);
                first = 0;
            }
        }
        printf("]\n");
    }
}
int main() 
{
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++) 
	{
        scanf("%d", &nums[i]);
    }
    generateSubsets(nums, n);
    return 0;
}
