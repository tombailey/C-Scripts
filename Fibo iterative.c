#include <stdio.h>

unsigned int fibo(unsigned int n) {
	unsigned int x = 1, y = 0, temp = 1;

	for (unsigned int i = 0; i < n-1; i++) {
		temp = x;
		x += y;
		y = temp;
	}

	return x;
}

int main(void) {
	printf("Enter the nth term you are looking for: ");

	unsigned int n;
	scanf("%u", &n);

	printf("Fibo %u is value %u", n, fibo(n));

	return 0;
}
