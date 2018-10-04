#include "pch.h"
#define XY_LENGTH 10

void ORC_a() {
	double x[XY_LENGTH] = { 0.0043, 0.00671, 0.01325, 0.0128, 0.016 }, y[XY_LENGTH] = { 0.027, 0.036, 0.042, 0.044, 0.04 }, sy[XY_LENGTH] = { 0.002, 0.0017, 0.0014, 0.0016,  0.0013 };
	double a = 0, S = 0, b = 0;

	for (int i = 0; i < XY_LENGTH; i++) {
		a += (x[i] * y[i]) / (sy[i] * sy[i]);
		b += (x[i] * x[i]) / (sy[i] * sy[i]);
	}
	a /= b;
	S = 1 / sqrt(b);
	cout << "a = " << a;
	cout << "+-" << S;
}

void ORC_ab() {
	double x[XY_LENGTH] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }, y[XY_LENGTH] = { 0.5,5,9.5,13.5,17,20,23.5,27.5,31,35 }, sy[XY_LENGTH] = { 0.15, 0.15, 0.15, 0.15, 0.15, 0.15, 0.15, 0.15, 0.15, 0.15 };
	double v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0;
	double d = 0, da = 0, db = 0;
	double Sa = 0, Sb = 0;
	double y_ = 0, x_ = 0, r = 0;
	double a, b;
	for (int i = 0; i < XY_LENGTH; i++) {
		v1 += (x[i] * x[i]) / (sy[i] * sy[i]);
		v2 += 1 / (sy[i] * sy[i]);
		v3 += (x[i]) / (sy[i] * sy[i]);
		v4 += (x[i] * y[i]) / (sy[i] * sy[i]);
		v5 += (y[i]) / (sy[i] * sy[i]);

		x_ += x[i];
		y_ += y[i];
	}

	d = v1 * v2 - v3 * v3;
	da = v4 * v2 - v3 * v5;
	db = v1 * v5 - v3 * v4;

	a = da / d;
	b = db / d;

	Sa = sqrt(v2 / d);
	Sb = sqrt(v1 / d);

	cout << "a = " << a;
	cout << "+-" << Sa << endl;
	cout << "b = " << b;
	cout << "+-" << Sb << endl;
	
	v1 = v2 = v3 = 0;
	x_ /= XY_LENGTH;
	y_ /= XY_LENGTH;
	for (int i = 0; i < XY_LENGTH; i++) {
		v1 += (x[i] - x_) * (y[i] - y_);
		v2 += (x[i] - x_) * (x[i] - x_);
		v3 += (y[i] - y_) * (y[i] - y_);
	}
	r = v1 / sqrt(v2*v3);
	cout << "r = " << r;
}