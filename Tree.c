#include <stdio.h>

struct tree {
	int value;
	struct tree *left, *right;
};

void printTree(struct tree *t) {
	if (t) {
		printf("%d\n", t->value);
		printTree(t->left);
		printTree(t->right);
	}
}

int main(void) {
	struct tree t1, t2, t3, t4;
	t1.value = 1;
	t2.value = 2;
	t3.value = 2;
	t4.value = 3;

	t1.left = &t2;
	t1.right = &t3;
	t3.right = &t4;
	t3.left = 0;
	t4.left = 0;
	t4.right = 0;

	printTree(&t1);

	return 0;
}
