#include "Person.cpp"
#include <iostream>

void Person::createCustomPerson() {
	vector<string> constructionVector;
	string input;
	
	CREATELOOP: cout << "First Name: ";
	cin >> input;
	constructionVector.push_back(input);

	cout << "Last Name: "; 
	cin >> input;
	constructionVector.push_back(input);

	cout << "City: ";
	cin >> input;
	constructionVector.push_back(input);

	cout << "Geschlecht: ";
	cin >> input;
	constructionVector.push_back(input);

	cout << "Alter: ";
	cin >> input;
	constructionVector.push_back(input);

	constructor(constructionVector);

	cout << "Safe Person? Yes / No";
	cin >> input;
	if (input == "Yes") {
		savePerson();
	}
	else {
		goto CREATELOOP;
	}

	

}