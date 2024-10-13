#include <iostream>
using namespace std;

int main()
{
    int birth_year, selection;
    cout << "What is your date of birth? ";
    cin >> birth_year;
    
    int viewer_age;
    int current_year = 2023;
    viewer_age = current_year - birth_year;
    cout << viewer_age << endl;
    cout << "What movie do you wish to watch? "<< endl;
	cin >> selection;
    if (viewer_age <= 13) {
    	cout << "Sorry, not eligible" << endl;
	}
	else {
		if (selection == 1) {
			cout << "Nigerian Movie";
		}
		else if (selection == 2) {
			cout << "American Movie";
		}
		else if (selection == 3) {
			cout << "Chinese Movie";
		}
		else if (selection == 0) {
			cout << "Cancel";
		}
		else {
			cout << "Invalid selection";
		}
	}
}

