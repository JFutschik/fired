#include <string>
#include <vector>
using namespace std;
enum gender { Male, Female };

class Person {															//beginn Klassendefinition. Kaum funktion, größtenteils Deklaration
	string firstName, lastName, city, outGender;
	gender persongender;
	int age;
	void constructor(vector<string>);
public:
	void setfirstName(string);
	void setlastName(string);
	void setcity(string);
	void setpersonGender(gender);
	void buildPerson();
	void setAge(int);
	void savePerson();
	void loadPerson();
	string reportData() {
		if (persongender == Female) {
			outGender = "Weiblich";
		}
		else {
			outGender = "Maennlich";
		}
		string report = "Vorname : " + firstName + "\n" + "Nachname : " + lastName + "\n" + "Geschlecht : " + outGender + "\n" + "Alter : " + to_string(age) + "\n" + "Wohnort : " + city;
		return report;
	};
};