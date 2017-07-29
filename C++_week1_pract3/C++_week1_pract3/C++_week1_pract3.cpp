// C++_week1_pract3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a;
	int b;

	cin >> a;
	cin >> b;

	if (b == 0) {
		cout << "Impossible" << endl;
	} else {
		cout << a / b << endl;
	}
    return 0;
}

