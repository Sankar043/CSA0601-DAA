#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int target;
    printf("Enter the key element to search: ");
    scanf("%d", &target);

    int result = binary_search(array, size, target);

    if (result != -1) {
        printf("Key element %d found in the position %d\n", target, result);
    } else {
        printf("Key element %d not found\n", target);
    }

    return 0;
}
