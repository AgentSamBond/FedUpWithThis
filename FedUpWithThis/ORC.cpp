#include "pch.h"
#define XY_LENGTH 3
#ifdef XY_LENGTH 3
void ORC_a() {
	double x[XY_LENGTH] = { 0.5,1,1.5 }, y[XY_LENGTH] = { 14.3,31.2,47.6 }, sy[XY_LENGTH] = { 0.2,0.8,0.9 };
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
#else
void ORC_ab() {
	double x[XY_LENGTH] = { 0.2,0.4,0.6,0.8 }, y[XY_LENGTH] = { 0.55,3.65,11.22,24.1 }, sy[XY_LENGTH] = { 0.03,0.05,0.07,0.1 };
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
#endif