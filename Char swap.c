#include <stdio.h>

void swap(char* a, char* b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	char a = 1, b = 2;
	printf("before swap a is %d and b is %d\n", a, b);

	swap(&a, &b);
	printf("after swap a is %d and b is %d", a, b);

	return 0;
}
