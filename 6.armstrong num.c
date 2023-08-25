#include <stdio.h>
#include <math.h>

int is_armstrong_number(int n) {
    int original_num = n;
    int num_digits = 0;
    
    // Count the number of digits in the number
    while (n > 0) {
        n /= 10;
        num_digits++;
    }
    
    n = original_num;
    int total = 0;
    
    // Calculate the sum of k-th powers of each digit
    while (n > 0) {
        int digit = n % 10;
        total += pow(digit, num_digits);
        n /= 10;
    }
    
    return total == original_num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_armstrong_number(num)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
