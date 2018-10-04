#include "pch.h"
double a0 = 5, d0 = 7, seg0 = 20;
double G(double x) {
	return pow(3 + 5*x, 2);
}
double G_(double x) {
	return pow(x, 2) / 2;
}

void Simpson() {
	double a = a0, b = a, c = 0, d = d0, sum = 0, seg_length = 0, fa = 0, fb = 0, fc = 0, zero = 0, k;
	double x, y, z;
	double y0[3][3], y1[3][3], y2[3][3], y3[3][3];
	int segments = seg0;
	seg_length = (d - a) / segments;

	//cout << "Real S = " << G_(d) - G_(a) << endl;

	double FindD3(double m[3][3]);

	for (int i = 0; i < segments; i++) {
		b += seg_length;

		fb = abs(G(b));
		c = (a + b) / 2;
		fa = abs(G(a));
		fc = abs(G(c));
		if (fa*fb < 0) {
			c = Dichotomy(a, b);
			k = (b - c) / (c - a);
			fb = abs(G(b));
			c = (a + b) / 2;
			fa = G(a);
			fc = G(c);

			y0[0][0] = a * a;
			y0[0][1] = a;
			y0[0][2] = 1;
			y0[1][0] = b * b;
			y0[1][1] = b;
			y0[1][2] = 1;
			y0[2][0] = c * c;
			y0[2][1] = c;
			y0[2][2] = 1;

			y1[0][0] = abs(fa);
			y1[0][1] = a;
			y1[0][2] = 1;
			y1[1][0] = abs(fb);
			y1[1][1] = b;
			y1[1][2] = 1;
			y1[2][0] = abs(fc);
			y1[2][1] = c;
			y1[2][2] = 1;

			y2[0][0] = a * a;
			y2[0][1] = abs(fa);
			y2[0][2] = 1;
			y2[1][0] = b * b;
			y2[1][1] = abs(fb);
			y2[1][2] = 1;
			y2[2][0] = c * c;
			y2[2][1] = abs(fc);
			y2[2][2] = 1;

			y3[0][0] = a * a;
			y3[0][1] = a;
			y3[0][2] = abs(fa);
			y3[1][0] = b * b;
			y3[1][1] = b;
			y3[1][2] = abs(fb);
			y3[2][0] = c * c;
			y3[2][1] = c;
			y3[2][2] = abs(fc);

			x = (FindD3(y1)) / (FindD3(y0));
			y = (FindD3(y2)) / (FindD3(y0));
			z = (FindD3(y3)) / (FindD3(y0));

			sum += ( (x / 3) * pow(b, 3) + (y / 2) * pow(b, 2) + z * b - ((x / 3) * pow(a, 3) + (y / 2) * pow(a, 2) + z * a) ) * (1+ k);
			b = a + seg_length;
		}
		else {
			y0[0][0] = a * a;
			y0[0][1] = a;
			y0[0][2] = 1;
			y0[1][0] = b * b;
			y0[1][1] = b;
			y0[1][2] = 1;
			y0[2][0] = c * c;
			y0[2][1] = c;
			y0[2][2] = 1;

			y1[0][0] = abs(fa);
			y1[0][1] = a;
			y1[0][2] = 1;
			y1[1][0] = abs(fb);
			y1[1][1] = b;
			y1[1][2] = 1;
			y1[2][0] = abs(fc);
			y1[2][1] = c;
			y1[2][2] = 1;

			y2[0][0] = a * a;
			y2[0][1] = abs(fa);
			y2[0][2] = 1;
			y2[1][0] = b * b;
			y2[1][1] = abs(fb);
			y2[1][2] = 1;
			y2[2][0] = c * c;
			y2[2][1] = abs(fc);
			y2[2][2] = 1;

			y3[0][0] = a * a;
			y3[0][1] = a;
			y3[0][2] = abs(fa);
			y3[1][0] = b * b;
			y3[1][1] = b;
			y3[1][2] = abs(fb);
			y3[2][0] = c * c;
			y3[2][1] = c;
			y3[2][2] = abs(fc);

			x = (FindD3(y1)) / (FindD3(y0));
			y = (FindD3(y2)) / (FindD3(y0));
			z = (FindD3(y3)) / (FindD3(y0));

			cout << endl << "a=" << a << " c =" << c << " b =" << b << "fa = "<<fa<<" fc "<<fc<<" fb "<<fb;

			x = (x / 3) * pow(b, 3) + (y / 2) * pow(b, 2) + z * b - ((x / 3) * pow(a, 3) + (y / 2) * pow(a, 2) + z * a);
			sum += x;
			cout << " x " << x << endl;
}
		a += seg_length;
	}
	cout << endl << "S = " << sum << endl << "a =" << x << " b =" << y << " c =" << z << endl;

}