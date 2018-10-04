#include "pch.h"
#define ARR_LENGTH 9

void Bubble()
{
	int arr[ARR_LENGTH];
	int c, s;
	s = 0;

	for (int i = 0; i < ARR_LENGTH; i++)
		arr[i] = int(rand() % 25 + 1);


	cout << "{";
	for (int i = 0; i < ARR_LENGTH; i++)
		cout << ",(" << arr[i] << ")";
	cout << "}" << endl << endl;

	for (int i = 1; i < (ARR_LENGTH - 1); i++) {
		for (int j = 0; j < ARR_LENGTH - i; j++) {
			if (arr[j] > arr[j + 1]) {
				c = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = c;
			}
			s += 1;
		}

	}

	cout << "{";
	for (int i = 0; i < ARR_LENGTH; i++)
		cout << ",(" << arr[i] << ")";
	cout << "}" << endl;

	cout << "Iterations: " << s << endl;
}