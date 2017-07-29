#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{	
	int a, b;
	cin >> a >> b;

	int i = a;
	vector<int> res;
 	for (i; i <= b; i++) {
		if (i % 2 == 0) {
			res.push_back(i);
		}
		else {
			continue;
		}
	}

	for (auto i : res) {
		cout << i << " ";
	}
	cout << endl;
    return 0;
}

