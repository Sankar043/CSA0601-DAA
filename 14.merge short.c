#include <stdio.h>
void merge(int arr[], int left, int mid, int right) 
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int leftArr[n1], rightArr[n2];
    int i,j,k;
    for (i = 0; i < n1; i++) 
	{
        leftArr[i] = arr[left + i];
    }
    for (j = 0; j < n2; j++) 
	{
        rightArr[j] = arr[mid + 1 + j];
    }
    i = 0, j = 0, k = left;
    while (i < n1 && j < n2) 
	{
        if (leftArr[i] >= rightArr[j]) 
		{
            arr[k] = leftArr[i];
            i++;
        } 
		else 
		{
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    while (i < n1) 
	{
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < n2) 
	{
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right) 
{
    if (left < right) 
	{
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
int main() 
{
    int m, n ,i,j,k;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &m);
    int nums1[m];
    printf("Enter the elements of the first array in non-increasing order:\n");
    for ( i = 0; i < m; i++) 
	{
        scanf("%d", &nums1[i]);
    }
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter the elements of the second array in non-increasing order:\n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &nums2[i]);
    }
    mergeSort(nums1, 0, m - 1);
    mergeSort(nums2, 0, n - 1);
    int mergedArray[m + n];
    i = 0, j = 0, k = 0;
    while (i < m && j < n) 
	{
        if (nums1[i] >= nums2[j]) 
		{
            mergedArray[k] = nums1[i];
            i++;
        } 
		else 
		{
            mergedArray[k] = nums2[j];
            j++;
        }
        k++;
    }
    while (i < m) 
	{
        mergedArray[k] = nums1[i];
        i++;
        k++;
    }
    while (j < n) 
	{
        mergedArray[k] = nums2[j];
        j++;
        k++;
    }
    printf("Merged and sorted array: ");
    for (i = 0; i < m + n; i++) 
	{
        printf("%d ", mergedArray[i]);
    }
    printf("\n");
    return 0;
}
