#include<iostream>
using namespace std;

int main() 
{
	
	int a, b, highestNumber;
	cout << "Input the value of a: ";
	cin >> a ;
	
	cout << "Input the value of b: ";
	cin >> b;
	highestNumber = (a > b) ? a : b;
	
	cout << "The hightest number is: " << highestNumber << endl;

}
