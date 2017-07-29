#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int counter = 0;
	int k = -1;
	for (auto i : s) {
		k++;
		if (i == 'f') {
			counter++;
			if (counter == 2) {
				cout << k << endl;
			}
		}
	}

	if (counter == 1) {
		cout << "-1" << endl;
	}
	else {
		if (counter == 0) {
			cout << "-2" << endl;
		}		
	}

    return 0;
}

