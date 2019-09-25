#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <boost/regex.hpp>
#include "Person.cpp", "loadSave.cpp"

using namespace std;																	//beginn setter-Methode

int main()
{
	string response;
	MAINLOOP: cout << "Do you want to hire a new Worker? (Yes/No)";
	cin >> response;
	if (response == "Yes") {
		Person testPerson;
		testPerson.buildPerson();
		string output = testPerson.reportData();
		cout << output << endl << "Hire? (Yes/No)";
		cin >> response;
		if (response == "No") {
			goto MAINLOOP;
		}
		else if (response == "Yes") {
			testPerson.savePerson();
			goto MAINLOOP;
		}
	}
	else if (response == "No") {
		cout << "What do you want to do?" << endl << "Load Person / Save Person";
		cin >> response;
		if (response == "Load"){
			Person testPerson;
			testPerson.loadPerson();
			string output = testPerson.reportData();
			cout << output << endl;
			goto MAINLOOP;
		}
	}
	else {
		cout << "Wie bitte?";
		goto MAINLOOP;
	}
	return 0;
}
//Todo: Mehrere Objekte in Vector laden. Speichern/Laden-Methode für "Staff" implementieren. Custom Person Creator implementieren. Textausgabe verschönern. Evtl. Texte in Datei auslagern und nach bedarf laden. Dokumentieren.