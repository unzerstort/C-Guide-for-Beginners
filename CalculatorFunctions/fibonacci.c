#include<stdio.h>

// function signature
int fibonacci(int n);

/* This is where the term entered by the user
 * will be read and the function will be called.
 */
int main()
{
	int term;
	
	printf("Enter the desired term from Fibonacci Series: ");
	scanf("%d", &term);
	printf("The term %d of Fibonacci Series is %d.\n", term, fibonacci(term));

	return 0;
}

/* The fibonacci recursive function determines the first
 * 2 terms of the sequence so that it can work. Then, it
 * calculates the sum of the 2 previous numbers of the 
 * desired term so that it can be shown.
 */
int fibonacci(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return fibonacci(n-1) + fibonacci(n-2);
}
