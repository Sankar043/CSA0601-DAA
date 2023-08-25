#include <stdio.h>
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Illegal input\n");
        return 1;
    }
    
    int reversed = reverseNumber(num);
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}
