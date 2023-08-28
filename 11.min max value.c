#include <stdio.h>
struct MinMax 
{
    int min;
    int max;
    int comparisons;
};
struct MinMax findMinMax(int arr[], int left, int right) 
{
    struct MinMax result, leftResult, rightResult;
    int mid;
    result.comparisons = 0;
    if (left == right) 
	{
        result.min = result.max = arr[left];
        return result;
    }
    if (right == left + 1) 
	{
        result.min = (arr[left] < arr[right]) ? arr[left] : arr[right];
        result.max = (arr[left] > arr[right]) ? arr[left] : arr[right];
        result.comparisons++;
        return result;
    }
    mid = (left + right) / 2;
    leftResult = findMinMax(arr, left, mid);
    rightResult = findMinMax(arr, mid + 1, right);
    result.comparisons += leftResult.comparisons + rightResult.comparisons;
    result.min = (leftResult.min < rightResult.min) ? leftResult.min : rightResult.min;
    result.max = (leftResult.max > rightResult.max) ? leftResult.max : rightResult.max;
    return result;
}
int main() 
{
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) 
	{
        printf("Illegal input.\n");
        return 1;
    }
    int arr[n];
    printf("Enter the elements:\n");
    for ( i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    struct MinMax result = findMinMax(arr, 0, n - 1);
    printf("Min value: %d\n", result.min);
    printf("Max value: %d\n", result.max);
    printf("Number of comparisons: %d\n", result.comparisons);
    return 0;
}
