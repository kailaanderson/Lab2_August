// demonstrates separating digits with a remainder operator
// Kaila Anderson
// 08/30/2022

#include <iostream>

using std::cout; using std::cin; using std::endl; 

int main() {

	cout << "Input any date in August from 1 to 31: ";
	int number;
	cin >> number;

	const int singles = number % 10;
	const int tens = number / 10;


	if (tens == 1) {
		switch (singles) {

		case 0:
			cout << "ten";
			break;

		case 1:
			cout << "eleven";
			break;

		case 2:
			cout << "twelve";
			break;

		case 3:
			cout << "thirteen";
			break;

		case 4:
			cout << "fourteen";
			break;

		case 5:
			cout << "fifteen";
			break;

		case 6:
			cout << "sixteen";
			break;

		case 7:
			cout << "seventeen";

		case 8:
			cout << "eighteen";
			break;

		case 9:
			cout << "nineteen";
			break;
		}

	}

	else {
		if (tens == 2)
			cout << "twenty";

		if (tens == 3)
			cout << "thirty";

		if (tens == 0)
			cout << "";

		switch (singles) {

		case 0:
			cout << "";
			break;
		case 1:
			cout << "one";
			break;

		case 2:
			cout << "two";
			break;

		case 3:
			cout << "three";
			break;

		case 4:
			cout << "four";
			break;

		case 5:
			cout << "five";
			break;

		case 6:
			cout << "six";
			break;

		case 7:
			cout << "seven";
			break;

		case 8:
			cout << "eight";
			break;

		case 9:
			cout << "nine";
			break;
		}
	}
}
