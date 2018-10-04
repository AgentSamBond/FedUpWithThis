#include "pch.h"
#define ARR_LENGTH 100
#define MAX_RAND 50

void Diagram() {
	char arr1[ARR_LENGTH][MAX_RAND];
	int arr[ARR_LENGTH];
	int arr_v[MAX_RAND];
	int c, s, max = 0, j;

	for (int i = 0; i < MAX_RAND; i++) 
		arr_v[i] = 0;
	
	for (int i = 0; i < ARR_LENGTH; i++) 
		arr[i] = int(rand() % MAX_RAND);
	
	for (int i = 0; i < ARR_LENGTH; i++)
		arr_v[arr[i]] += 1;

	for (int i = 0; i < MAX_RAND; i++)
		if (arr_v[i] > max)
			max = arr_v[i];

	for (int i = 0; i < MAX_RAND; i++)
		cout << i << " ";
	
	cout << endl;
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr_v[j] > 0) {
				cout << "* ";
				arr_v[j] -= 1;
			}
			else {
				cout << "  ";
			}
		}

		for (int j = 10; j < MAX_RAND; j++) {
			if (arr_v[j] > 0) {
				cout << "*  ";
				arr_v[j] -= 1;
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}
	

}