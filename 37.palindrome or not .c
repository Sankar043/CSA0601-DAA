#include <stdio.h>
int isPalindrome(int num)
 {
    int original = num;
    int reversed = 0;
    while (num > 0) 
	{
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}
int main() 
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (isPalindrome(n)) 
	{
        printf("True\n");
    }
	 else 
	 {
        printf("False\n");
    }
    return 0;
}
