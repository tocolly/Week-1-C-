#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;
	while (a && b) {
		if (a > b) {
			a = a % b;
		}
		else {
			b = b % a;
		}
	}

	cout << a + b << endl;
    return 0;
}

