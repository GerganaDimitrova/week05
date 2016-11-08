// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	bool isPrime = true;

	if (number <= 1)
		isPrime = false;
	else
		for (int i = 2; i*i <= number && isPrime; i++) {
			if (number%i == 0)
				isPrime = false;
		}
	cout << (isPrime ? "prime number" : "not a prime number") << endl;
    return 0;
}

