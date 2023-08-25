#include <stdio.h>

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size, m, n;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of M: ");
    scanf("%d", &m);
    printf("Enter the value of N: ");
    scanf("%d", &n);

    if (m > size || n > size || m <= 0 || n <= 0) {
        printf("Invalid values of M or N\n");
        return 1;
    }

    sortArray(arr, size);

    int mth_max = arr[size - m];
    int nth_min = arr[n - 1];

    printf("M-th maximum number: %d\n", mth_max);
    printf("N-th minimum number: %d\n", nth_min);

    int sum = mth_max + nth_min;
    int difference = mth_max - nth_min;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

    return 0;
}
