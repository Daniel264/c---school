#include <iostream>

int main() {
	int number;
	std::cout<<"Enter a number from 1-6: ";
	std::cin>>number;
	
	if (number == 1) {
		std::cout<<"*";
	}
	else if (number == 2) {
		std::cout<<"**";
	}
	else if (number == 3) {
		std::cout<<"***";
	}
	else if (number == 4) {
		std::cout<<"****";
	}
	else if (number == 5) {
		std::cout<<"*****";
	}
	else if (number == 6) {
		std::cout<<"******";
	}
	else {
		std::cout<<"Invalid Number";
	}
	return 0;
}
