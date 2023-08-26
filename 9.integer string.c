#include <stdio.h>

int binarySearch(int nums[], int target, int left, int right) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            return mid; // Target found
        } else if (nums[mid] < target) {
            left = mid + 1; // Adjust the left boundary
        } else {
            right = mid - 1; // Adjust the right boundary
        }
    }
    
    return -1; // Target not found
}

int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the sorted array elements:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    printf("Enter the target element to search for: ");
    scanf("%d", &target);

    int result = binarySearch(nums, target, 0, n - 1);

    if (result != -1) {
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}
