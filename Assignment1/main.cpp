#include <iostream>
#include "functions.h"

using namespace std;

int main() {
	int choice;

	do {
		cout << "------------------------------------------------" << endl;
		cout << "Main Menu" << endl;
		cout << "" << endl;
		cout << "1) Check if a number is divisible by 2" << endl;
		cout << "2) Check if a number is a prime number" << endl;
		cout << "3) Exit Program" << endl;
		cout << "" << endl;
		cout << "Enter choice: " << endl;
		cout << "" << endl;
		cin >> choice;

		switch (choice) {
			case 1:
				checkDivisible();
				break;
			case 2:
				if (checkPrime()) {
					cout << "The number you have entered is a prime number." << endl;
				}
				else {
					cout << "The number you have entered is a not prime number." << endl;
				}
				break;
			case 3:
				cout << "Program terminated" << endl;
				break;
			default:
				cout << "Please select one of the options above." << endl;
		}
		cout << "" << endl;
	} while (choice != 3);

	return 0;
}