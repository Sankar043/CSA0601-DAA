#include <stdio.h>

void selectionSort(int arr[], int n) {
	int i,j;
    for (i = 0; i < n - 1; i++) {
    	
        int minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void printArray(int arr[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n,i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arrA[n];
    int arrB[n];

    printf("Enter %d elements for array A: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arrA[i]);
    }

    printf("Enter %d elements for array B: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arrB[i]);
    }

    printf("Input A: ");
    printArray(arrA, n);

    selectionSort(arrA, n);

    printf("Output A: ");
    printArray(arrA, n);

    printf("Input B: ");
    printArray(arrB, n);

    selectionSort(arrB, n);

    printf("Output B: ");
    printArray(arrB, n);

    return 0;
}
