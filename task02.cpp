// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int S = 1;
	if (x < y) {
		for (int i = x; i <= y; i++) {
			S = S*i;
		}
		cout << S << endl;
	}
	else 
		for (int i = y; i <= x; i++) {
			S = S*i;
		}
	cout << S << endl;

    return 0;
}

