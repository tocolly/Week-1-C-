// C++_week1_pract2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double a;
	double b;
	double c;

	cin >> a;
	cin >> b;
	cin >> c;

	double x1;
	double x2;
	
	double D;
	D = pow(b , 2) - 4 * a * c;

	double d1;
	d1 = sqrt(D);

	if (a == 0) {
		if (b == 0) {
			cout << ' ' << endl;
		}
		else {
			x1 = -c / b;
			cout << x1 << endl;
		}
	}
	else {
		if (D == 0) {
			x1 = -b / (2 * a);
			cout << x1 << endl;
		}
		else {
			if (D > 0) {
				x1 = (-b + d1) / (2 * a);
				x2 = (-b - d1) / (2 * a);
				cout << x1 << ' ' << x2 << endl;
			}
			else { cout << ' ' << endl; }
		}
	}

	return 0;
}

