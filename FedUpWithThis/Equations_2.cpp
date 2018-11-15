#include "pch.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
double K_(double x) {
	return (-6*x)*exp(-3 * pow(x, 2)) - 1;
}

double K(double x) {
	return exp(-3*pow(x,2)) - x;
}

void Tangents() {
	double x,x0, e, q; // x0 - начальная точность, е - невязка, q - точность
	int i = 0;
	cout << "Enter starting value ";
	cin >> x0;
	e = 0.001;
	q = 0.001;
	x = x0 - K(x0) / K_(x0);
	while (abs(x0 - x) > q && abs(K_(x0)) > e) {
		i++;
		x0 = x;
		x = x0 - K(x0) / K_(x0);
		
	}
	cout << "Answer is " << x0 << " with accuracy: " << abs(x0 -x) << " f(Answer) = " << K(x) << " Iterations: " << i;
}
