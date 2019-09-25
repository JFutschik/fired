#include "Person.cpp"
#include <vector>
#include <random>
#include <fstream>
#include <vector>
#include <sstream>
#include <ctime>


void Person::constructor(vector<string> constructionVector)
{
	firstName = constructionVector.at(0);
	lastName = constructionVector.at(1);
	city = constructionVector.at(2);
	if (constructionVector.at(3) == "Female" || constructionVector.at(3) == "Weiblich") {
		persongender = Female;
	}
	else {
		persongender = Male;
	}
	age = stoi(constructionVector.at(4));
};

void Person::buildPerson() {											//beginn constructor

	ifstream dataFile;													//initialisiert einen filestream namens dataFile
	string line, item;
	vector<string> dataVector, personVector;
	const char delim = ',';
	srand(time(0));
	int selector;

	dataFile.open("persondata.csv", ios::in);							//dataFile öffnet die datei mit dem Namen persondata.csv im Modus input
	while (getline(dataFile, line)) {									//während es in der datei eine nächste zeile gibt, schreibe sie in einen string namens line
		stringstream lineStream(line);									//schreibt string in stringstream
		while (getline(lineStream, item, delim)) {						//setzt delim als zeilenende und schreibt zeilenweise in string item
			dataVector.push_back(item);									//schreibt string item in vector
		};
		selector = (rand() % dataVector.size());						//generiert einen randInt zwischen 0 und länge der aktuellen zeile
		personVector.push_back(dataVector.at(selector));				//schreibt zufälliges item aus zeile in den vector.
		dataVector.clear();
	};
	dataFile.close();													//schließt die datei, nachdem alle zeilen geparst wurden.
	selector = (rand() % 2);
	if (selector == 0) {
		personVector.push_back("Male");
		personVector.erase(personVector.begin() + 1);
	}
	else {
		personVector.push_back("Female");
		personVector.erase(personVector.begin());
	};
	personVector.push_back(to_string((rand() % 47 + 18)));
	constructor(personVector);
};