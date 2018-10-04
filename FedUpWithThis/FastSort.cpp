#include "pch.h"

int arr[20];
int n_it = 0;
void QuickSort(int a, int b) {
	int right, left, op_v, op_n, c;
	n_it++;
	if (a >= b)
		return;
	op_n = rand() % (b - a + 1) + a;
	op_v = arr[op_n];
	
	right = b;
	left = a;


	while (true) {
		//������ arr[right]<=op_v ������
		while (arr[right] > op_v) {
			if (right == left)
				goto NextIt;
			right -= 1;
			if (right == left)
				goto NextIt;
		}
		//������ arr[left]>op_v �����
		while (arr[left] < op_v) {
			if (right == left)
				goto NextIt;
			left += 1;
			if (right == left)
				goto NextIt;
		}
		//������ �������

		c = arr[right];
		arr[right] = arr[left];
		arr[left] = c;
	}
NextIt:
	QuickSort(a, right);
	QuickSort(right + 1, b);
}