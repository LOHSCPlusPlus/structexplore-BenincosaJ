#include <iostream>
using namespace std;

// Put the person struct here
//person struct
struct Person {
  string firstName;
  string lastName;
  Person();
  Person(string name1, string name2);
};

Person::Person() {
	firstName = "unknown";
	lastName = "unknown";
}

Person::Person(string name1, string name2) {
  firstName = name1;
  lastName = name2;
}

void printPerson(Person person){
  cout << person.firstName << " " << person.lastName << endl;
}
void changeLastName(Person &person, string newLastName){
  person.lastName = newLastName;
}
int main() {

	// Create two instances of person here, and assign the names.
    Person dorian;
    Person linus("Linus", "Van Pelt");
    
    
	// Add the prints here
    printPerson(dorian);
    printPerson(linus);
    changeLastName(linus, "Torvalds");
    printPerson(linus);



	return 0;
}


