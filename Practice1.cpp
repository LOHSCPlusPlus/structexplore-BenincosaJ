#include <iostream>
using namespace std;

// Put the person struct here
//person struct
struct Person {
  string firstName;
  string lastName;
};





int main() {
	// Create two instances of person here, and assign the names.
    Person dorian;
    dorian.firstName = "Dorian";
    dorian.lastName = "Gray";

    Person charlie;
    charlie.firstName = "Charlie";
    charlie.lastName = "Brown";
	// Add the prints here
    cout << dorian.firstName << " " << dorian.lastName << endl;
    cout << charlie.firstName << " " << charlie.lastName << endl;



	return 0;
}
