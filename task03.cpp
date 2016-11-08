// task03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	if ((a >= 0) && (a <= 100)) {
		for (int i = a; i <= 100; i++) {
			if ((i % 3 == 0) && (i % 2 == 0))
				cout << i << " " << endl;
		}
	}
    return 0;
}

