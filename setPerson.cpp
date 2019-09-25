#include "Person.cpp"
#include <string>

void Person::setfirstName(string infirstName) {							//:: definiert ein Member einer klasse auﬂerhalb der Klassendefinition an sich. 
	firstName = infirstName;
};
void Person::setcity(string incity) {
	city = incity;
};
void Person::setlastName(string inlastName) {
	lastName = inlastName;
};
void Person::setpersonGender(gender inGender) {
	persongender = inGender;
}
void Person::setAge(int inAge) {
	age = inAge;
}