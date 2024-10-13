#include <iostream>

using namespace std;

double finalAmountCalculator(double originalAmount, double discountPercentage) {
	return originalAmount * (1 - discountPercentage/100);
}

int main() {
	double originalAmount;
	cout << "What is the original amount of the item: ";
	cin >> originalAmount;

	double discountPercentage;
	cout << "What is the discount percentage: ";
	cin >> discountPercentage;

	double finalCost;
	finalCost = finalAmountCalculator(originalAmount , discountPercentage);

	cout << finalCost;
}
