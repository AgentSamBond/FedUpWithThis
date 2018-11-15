#include "pch.h"
#define SIZE_X 6
#define SIZE_Y 5
int main()
{
	void ORC_a();
	double Average();
	//Average();

	double* Create_matrix(int size1);
	void Print_matrix(double* matrix, int size);
	double* Multiply_elements(double* matrix1, double* matrix2, int size);

	double** Create_matrix_2d(int sizex, int sizey);
	void Print_matrix_2d(double** matrix, int sizex, int sizey);
	double** Multiply_elements_2d(double** matrix1, double** matrix2, int sizex, int sizey);

	//double *a = Create_matrix(SIZE_X);
	//double *b = Create_matrix(SIZE_X);
	//Print_matrix(a, SIZE_X);

	//Print_matrix(b, 6);
	//a = Multiply_elements(a, b, SIZE_X);
	//Print_matrix(a, SIZE_X);

	double **a = Create_matrix_2d(SIZE_X, SIZE_Y);
	double **b = Create_matrix_2d(SIZE_X, SIZE_Y);
	Print_matrix_2d(a, SIZE_X, SIZE_Y);

	Print_matrix_2d(b, SIZE_X, SIZE_Y);
	a = Multiply_elements_2d(a, b, SIZE_X, SIZE_Y);
	Print_matrix_2d(a, SIZE_X, SIZE_Y);


}
