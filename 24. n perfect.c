#include <stdio.h>
#include <stdbool.h>
bool isPerfectNumber(int num)
 {
    if (num <= 1)
	 {
        return false;
    }
    int sum = 1;
    int i;
    for ( i = 2; i * i <= num; i++) 
	{
        if (num % i == 0) 
		{
            sum += i;
            if (i * i != num) 
			{
                sum += num / i;
            }
        }
    }
    return sum == num;
}
int main() 
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (isPerfectNumber(n)) 
	{
        printf("%d is a perfect number.\n", n);
    }
	 else 
	 {
        printf("%d is not a perfect number.\n", n);
    }
    return 0;
}
