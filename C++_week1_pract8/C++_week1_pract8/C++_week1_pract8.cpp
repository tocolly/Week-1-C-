#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std; 

int main()
{
	int n;
	cin >> n;
	vector<int> res;
	int k;

	// fill the vector with 0s and 1s
	while (n >= 1) {
		k = n % 2;
		res.push_back(k);
		n /= 2;
	}

	// reverse elements in vector for the right order of 0s and 1s
	reverse(res.begin(), res.end());
	
	// remove useless 0s 
	int g = 0;
	for (int p = 0; p < res.size(); p++) {
		if (res[p] == 0) {
			g++;
		}
		else {
			break;
		}
	}
	
	res.erase(res.begin(), res.begin() + g);

	// print result
	for (auto r : res) {
		cout << r;
	}
	
	cout << endl;
    
	return 0;
}

