#include <stdio.h>
int linearSearch(int arr[], int size, int key) 
{
	int i,n;
    for ( i = 0; i < size; i++) 
	{
        if (arr[i] == key) 
		{
            return i; 
        }
    }
    return -1; 
}
int main() 
{
    int n ,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for ( i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the key element to search: ");
    scanf("%d", &key);
    int position = linearSearch(arr, n, key);
    if (position != -1) 
	{
        printf("Element found in position %d\n", position + 1);
    } 
	else 
	{
        printf("Element not found.\n");
    }
    return 0;
}
