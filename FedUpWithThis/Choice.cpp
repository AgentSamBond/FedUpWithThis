#include "pch.h"
#define ARR_LENGTH 100
#define MAX_RAND 100

void Choice()
{

	int arr[ARR_LENGTH];
	int c, s, min, j;
	s = 0;
	min = ARR_LENGTH - 1;
	for (int i = 0; i < ARR_LENGTH; i++)
		arr[i] = int(rand() % MAX_RAND + 1);


	cout << "{";
	for (int i = 0; i < ARR_LENGTH; i++)
		cout << ",(" << arr[i] << ")";
	cout << "}" << endl << endl;

	for (int i = 0; i < (ARR_LENGTH - 1); i++) {
		j = i;
		for (j = i; j < ARR_LENGTH; j++) {
			if (arr[j] < arr [min])		min = j;
			s += 1;
		}
		c =  arr[i];
		arr[i] = arr[min];
		arr[min] = c;
		min = ARR_LENGTH - 1;
	}

	cout << "{";
	for (int i = 0; i < ARR_LENGTH; i++)
		cout << ",(" << arr[i] << ")";
	cout << "}" << endl;

	cout << "Iterations: " << s << endl;
}