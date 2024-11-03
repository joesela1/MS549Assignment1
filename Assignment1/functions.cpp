#include <iostream>
#include "functions.h"

using namespace std;

void checkDivisible() {
	int num;
	cout << "Option 1 selected..." << endl;
	cout << "Enter number to be checked:" << endl;
	cin >> num;
	cout << "Checking..." << endl;
	if (num % 2 == 0) {
		cout << "The number " << num << " is divisible by 2." << endl;
	}
	else {
		cout << "The number " << num << " is not divisible by 2." << endl;
	}
}

bool checkPrime() {
	int num;
	cout << "Option 2 selected..." << endl;
	cout << "Enter number to be checked:" << endl;
	cin >> num;
	cout << "Checking..." << endl;
	if (num <= 1) {
		//cout << "Numbers less than or is 1 are not a prime number";
		return false;
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			//cout << num << " is not a prime number." << endl;
			return false;
		}
	}
	return true;
}

