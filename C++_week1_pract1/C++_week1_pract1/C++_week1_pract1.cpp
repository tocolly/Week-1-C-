#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string a;
	string b;
	string c;

	string res;

	cin >> a;
	cin >> b;
	cin >> c;

	vector<string> strings = {a, b, c};
	res = strings[0];
	for (string i : strings) {
		if (res == i) {
			res = i;
			continue;
		} else {
			if (res > i) {
				res = i;
			} else {
				continue;
			}
		}
	}
	
	cout << res << endl;
    return 0;
}

