#include "pch.h"
#define XY_LENGTH 4
double Average() {
	double val[] = {24,24,25,25,25};
	double x_ = 0, Sx = 0;
	int i;
	for (i = 0; fabs(val[i]) > 1.0E-10; i++) {
		x_ += val[i];
	}
	x_ /= i;
	for (i = 0; fabs(val[i]) > 1.0E-10; i++) {
		Sx += (val[i] - x_) * (val[i] - x_);
	}
	Sx /= i * (i - 1);
	Sx = sqrt(Sx);
	cout << "x_ = " << x_ << " Sx = " << Sx << endl;
	return 0;
}

void Noth() {
	double x[XY_LENGTH] = { 0.82, 0.82, 0.23,23 }, y[XY_LENGTH] = { 0.5,5,9.5,13.5 }, sy[XY_LENGTH] = { 0.15, 0.15, 0.15, 0.15};
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
}