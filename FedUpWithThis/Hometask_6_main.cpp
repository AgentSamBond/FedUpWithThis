#include "pch.h"

#define SIZE_X 6

#define SIZE_Y 5

void main_hometask()

{
	double* Create_matrix(int size1);
	void Print_matrix(double* matrix, int size);
	double* Multiply_elements(double* matrix1, double* matrix2, int size);
	double** Create_matrix_2d(int sizex, int sizey);
	void Print_matrix_2d(double** matrix, int sizex, int sizey);
	double** Multiply_elements_2d(double** matrix1, double** matrix2, int sizex, int sizey);

	
	// For current seminar

	double* Sqr_matrix(double* matrix1, int size);
	double* Sqrt_matrix(double* matrix1, int size);
	double* aSin_matrix(double* matrix1, int size);

	// Task 3 

	double *a = Create_matrix(SIZE_X);
	Print_matrix(a, SIZE_X);
	a = Sqr_matrix(a, SIZE_X);
	Print_matrix(a, SIZE_X);

	a = Sqrt_matrix(a, SIZE_X);
	Print_matrix(a, SIZE_X);

	a = aSin_matrix(a, SIZE_X);
	Print_matrix(a, SIZE_X);

	// Task 4

	void Print_matrix_triangle(double** matrix, int size);
	double** Create_matrix_triangle(int size);
	void Delete_matrix_triangle(double** matrix, int size);
	double** Add_elements_triangle(double** matrix1, double** matrix2, int size);
	double** Multiply_On_Number_triangle(double** matrix, int size);
	double Find_element_triangle(double** matrix, int size, int i, int j);
	double Find_det_triangle(double** matrix, int size);

	double **s = Create_matrix_triangle (SIZE_X);
	double **s1 = Create_matrix_triangle(SIZE_X);

	Print_matrix_triangle(s, SIZE_X);
	Print_matrix_triangle(s1, SIZE_X);
	//Delete_matrix_triangle(s, SIZE_X);
	//Remove brackets when need

	s = Add_elements_triangle(s, s1, SIZE_X);
	Print_matrix_triangle(s, SIZE_X);

	s = Multiply_On_Number_triangle(s, SIZE_X);
	Print_matrix_triangle(s, SIZE_X);

	cout << Find_element_triangle(s, SIZE_X, 3,4) << endl;
	cout << Find_det_triangle(s, SIZE_X) << endl;

}