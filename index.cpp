#include <iostream>
#include <cmath>

using namespace std;
	
int main()  {
	cout << "radius: ";
	double radius;
	cin >> radius;

	const double pie = 3.142;

	double power = pow(radius, 2);
	double area = pie * power;
	cout << area ;

	return 0;
}


