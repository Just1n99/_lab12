#include "mylib.h"

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int add(int a, int b) {
	int ans = 0;
	ans = a + b;
	return ans;
}

int subtract(int a, int b) {
	int ans = 0;
	ans = a - b;
	return ans;
}
