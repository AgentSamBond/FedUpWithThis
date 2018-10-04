#include "pch.h"
int num = 0;
void Factorization(int x) {
	if (x == 1) {
		cout << 1 << " Num: " << num;
		return;
	}
	for (int i = 2; i <= x; i++) {
		num++;
		if (x % i == 0) {
			x /= i;
			
			cout << i << " * ";
			goto Next;
		}
	}

Next:
	Factorization(x);
}