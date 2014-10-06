#include <stdio.h>

unsigned int fact(unsigned int n) {
	return (n == 0 || n == 1) ? 1 : n * fact(n-1);
}

int main(void) {
	printf("Input the number you would like to know the factorial value for: ");

	unsigned int n;
	scanf("%u", &n);

	printf("Factorial of %u is %u", n, fact(n));

	return 0;
}
