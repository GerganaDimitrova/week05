// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int p;
	int q;
	cin >> p >> q;
	bool check;

	for (p; p <= q; p++) {
		check = 1;

		for (int i = 2; i < p; i++) {

			if (p % i == 0) {
				check = 0;
			}
		}
		if (check)
			cout << p << " " << endl;
	}
	cout << endl;
    return 0;
}

