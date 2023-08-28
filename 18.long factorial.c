#include <stdio.h>
#include <time.h>
unsigned long long factorial(int n) 
{
    if (n < 0) 
	{
        printf("No negative value\n");
        return 0;
    }
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    clock_t start_time = clock();
    unsigned long long fact = factorial(n);
    clock_t end_time = clock();
    if (fact > 0) 
	{
        printf("Value is %llu\n", fact);
        double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
        printf("Time taken: %f seconds\n", time_taken);
    }   
    return 0;
}
