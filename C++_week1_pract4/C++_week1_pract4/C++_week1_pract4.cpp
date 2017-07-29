// C++_week1_pract4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	double n, a, b, x, y;

	cin >> n >> a >> b >> x >> y;

	double sum = 0;
	if (n <= a && n < b) {
		cout << n << endl;
	}
	else {
		if (n >= a && n <= b) {
			cout << n - (n * x / 100) << endl;
		}
		else {
			cout << n - (n * y / 100) << endl;
		}
		
	}
	
	return 0;
}

