// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	int fact = 1;

	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << fact << " ";
			fact++;
		}
		cout << endl;
	}

    return 0;
}

