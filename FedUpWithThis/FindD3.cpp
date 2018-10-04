#include "pch.h"

double FindD2(double k[2][2]) {
	double det2;
	det2 = (k[0][0] * k[1][1]) -(k[0][1] * k[1][0]);
	return det2;
}

double FindD3(double m[][3]) {
	double det;
	double mat1[2][2] = { {m[1][1], m[1][2]}, {m[2][1], m[2][2]} };
	double mat2[2][2] = { {m[1][0], m[1][2]}, {m[2][0], m[2][2]} };
	double mat3[2][2] = { {m[1][0], m[1][1]}, {m[2][0], m[2][1]} };
	det = m[0][0] * FindD2(mat1) - m[0][1] * FindD2(mat2) + m[0][2] * FindD2(mat3);
	return det;
}