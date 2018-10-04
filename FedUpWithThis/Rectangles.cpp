#include "pch.h"

double F(double x) {
	return sin(x);
}
double F_(double x) {
	return pow (x, 2) / 2;
}

extern double a0, d0, seg0;

double G(double x);

void Rectangles() {
	double a = a0, b = a, c = d0, sum = 0, seg_length = 0, fa = 0, fb = 0, fm = 0, zero = 0;
	int segments = seg0;
	seg_length = (c - a) / segments;

	//cout << "Real S = " << F_(c) - F_(a) << endl;

	for (int i = 0; i < segments; i++) {
		b += seg_length;
		fa = G(a);
		fb = G(b);

		if (fa*fb < 0) {
			zero = (b*fa - a * fb) / (fa - fb);
			sum += abs((zero - a) * fa / 2);
			sum += abs((b - zero) * fb / 2);
		}
		else {
			fm = abs((fa + fb) / 2);
			cout << fm * seg_length << endl;
			sum += fm * seg_length;
		}
		a += seg_length;
	}
	cout << "S = " << sum << endl;
	
}