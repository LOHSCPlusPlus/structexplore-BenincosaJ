#include <iostream>
using namespace std;

// Put the person struct here
//person struct
struct Person {
  string firstName;
  string lastName;
  Person();
};

Person::Person() {
	firstName = "unknown";
	lastName = "unknown";
}



int main() {

	// Create two instances of person here, and assign the names.
    Person dorian;
    Person charlie;
    
	// Add the prints here
    cout << dorian.firstName << " " << dorian.lastName << endl;
    cout << charlie.firstName << " " << charlie.lastName << endl;



	return 0;
}
