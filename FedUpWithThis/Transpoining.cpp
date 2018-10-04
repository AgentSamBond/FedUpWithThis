#include "pch.h"

#define ARR_LENGTH 10
#define MAX_RAND 99

void Transpoining() {
	int arr[ARR_LENGTH][ARR_LENGTH];
	int arr1[ARR_LENGTH][ARR_LENGTH];
	int c, s, min, j;
	s = 0;
	min = ARR_LENGTH - 1;
	for (int i = 0; i < ARR_LENGTH; i++) {
		for (int j = 0; j < ARR_LENGTH; j++) {
			arr[i][j] = int(rand() % MAX_RAND + 1);
		}
	}
	for (int i = 0; i < ARR_LENGTH; i++) {
		cout << "|| ";
		for (int j = 0; j < ARR_LENGTH; j++) {
			if (int(arr[i][j] / 10) == 0) {
				cout << arr[i][j] << "  ";
			} else
			cout << arr[i][j] << " ";
		}
		cout << "||" << endl;
	}
	cout << endl;
	for (int i = 0; i < ARR_LENGTH; i++) {
		for (int j = 0; j < ARR_LENGTH; j++) {
			arr1[j][i] = arr[i][j];
		}
	}
	for (int i = 0; i < ARR_LENGTH; i++) {
		cout << "|| ";
		for (int j = 0; j < ARR_LENGTH; j++) {
			if (int(arr1[i][j] / 10) == 0) {
				cout << arr1[i][j] << "  ";
			}
			else
				cout << arr1[i][j] << " ";
		}
		cout << "||" << endl;
	}
}