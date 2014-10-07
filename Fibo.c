#include <stdio.h>

unsigned int fibo(unsigned int n) {
	return (n == 1 || n == 2) ? 1 : fibo(n-1) + fibo(n-2);
}

int main(void) {
	printf("Input the nth term you are looking for: ");

	unsigned int n;
	scanf("%u", &n);

	printf("Fibo %u is %u", n, fibo(n));

	return 0;
}
