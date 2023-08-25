#include <stdio.h>

void print_subset(int subset[], int size) {
    printf("Subset is (");
    int i;
    for ( i = 0; i < size; i++) {
        printf("%d", subset[i]);
        if (i < size - 1) {
            printf(",");
        }
    }
    printf(")\n");
}

void sum_of_subsets_backtracking(int arr[], int subset[], int index, int size, int target_sum, int current_sum) {
    if (current_sum == target_sum) {
        print_subset(subset, index);
        return;
    }

    if (index >= size || current_sum > target_sum) {
        return;
    }

    // Include the current element in the subset
    subset[index] = arr[index];
    sum_of_subsets_backtracking(arr, subset, index + 1, size, target_sum, current_sum + arr[index]);

    // Exclude the current element from the subset
    subset[index] = 0;
    sum_of_subsets_backtracking(arr, subset, index + 1, size, target_sum, current_sum);
}
int main() {
    int size,i;
    printf("Enter the size of the set: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target_sum;
    printf("Enter the target sum: ");
    scanf("%d", &target_sum);

    int subset[size];
    sum_of_subsets_backtracking(arr, subset, 0, size, target_sum, 0);

    return 0;
}
