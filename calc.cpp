#include <iostream>
#include <cmath>
using namespace std;

double add_num(double x, double y) {
	return x + y;
}

double subtract_num(double x, double y) {
	return x - y;
}

double multiply(double x, double y) {
	return x * y;
}

double divide(double x, double y) {
	return x / y;
}

//double modulus(double x, double y) {
	//return x % y;
//}
int main() {
	cout << "operations" << endl;
	cout << "a.add" << endl;
	cout << "b.subtract" << endl;
	cout << "c.multiply" << endl;
	cout << "d.divide" << endl;

	string my_choice = "Please enter a choice(a/b/c/d): ";
	cout << my_choice;
	cin >> my_choice;

	double num_one;
	double num_two;

	cout << "Enter first number: ";
	cin >> num_one;

	cout << "Enter second number: ";
	cin >> num_two;

	if (my_choice == "a") {
		cout << add_num(num_one, num_two);
	}
	else if (my_choice == "b") {
		cout << subtract_num(num_one, num_two);
	}
	else if (my_choice == "c") {
		cout << multiply(num_one, num_two);
	}
	else if (my_choice == "d") {
		cout << divide(num_one, num_two);
	}
	else {
		cout << "invalid input";
	}

	return 0;
}

