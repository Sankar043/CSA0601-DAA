#include <stdio.h>
int calculateEvenSum(int n)
{
	if (n <= 0)
		return 0;
	int fibo[2 * n + 1];
	fibo[0] = 0, fibo[1] = 1;
	int sum = 0;
	int i;
	for ( i = 2; i <= 2 * n; i++) 
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		if (i % 2 == 0)
			sum += fibo[i];
	}
	return sum;
}
int main()
{
	int n;
	printf("Enter any integer :");
	scanf("%d",&n);
	int sum = calculateEvenSum(n);
	printf("Even indexed Fibonacci Sum upto %d terms = %d",n, sum);
	return 0;
}
