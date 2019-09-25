#include "Person.cpp"
#include <fstream>
#include <boost/regex.hpp>

void Person::savePerson() {
	string saveString;
	ofstream saveFile("saveFile.txt");
	saveString = reportData();
	saveFile << saveString;
	saveFile.close();													//leitet den output der report-methode in datei um.
}

void Person::loadPerson() {
	ifstream loadFile;
	string line;
	string temp;
	vector<string> resultsVector;
	loadFile.open("saveFile.txt", ios::in);
	while (getline(loadFile, line)) {
		boost::regex parseSave{ "(?<=:\\s)(.*\\z)" };					//regex entfernt bezeichner und delimiter
		boost::smatch loadMatch;
		if (boost::regex_search(line, loadMatch, parseSave)) {			//Durchsucht line nach matches auf parseSave und läd ergebniss nach loadMatch
			resultsVector.push_back(loadMatch[0]);						//läd Values in vector
		}
	}
	loadFile.close();
	swap(resultsVector.at(3), resultsVector.at(2));
	swap(resultsVector.at(2), resultsVector.at(4));
	constructor(resultsVector);											//wie gehabt. könnte man refaktorieren, um zeilen zu sparen
}