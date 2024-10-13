#include <iostream>

using namespace std;

int calculateBigger(int num1 , int num2) {
	return (num1 > num2) ? num1 : num2;
}

int main () {
	int num1;
	cout << "Enter a : ";
	cin >> num1;
	
	double num2;
	cout << "Enter b : ";
	cin >> num2;
	
	double bigger = calculateBigger(num1 , num2);
	cout << "The square of the given number is: " << bigger;
}
