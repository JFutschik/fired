#include <iostream> //man muss jeden schei� importieren, sonst funktioniert garnichts
using namespace std; //kann verschiedene Funktionen voneinander trennen, wenn die beispielsweise den selben namen haben

int main() //main-Funktion, die jede c++-applikation brauch. int ist der r�ckgabewert, in der klammer k�nnen werte an die funktion weitergegeben werden.
{
	auto zeichen = "x\n";
	cout << zeichen <<endl;
	int a = 1;
	int b(2);
	int c{ 3 };
	cout << a << b << c; // alle drei arten, variablen zu initialisieren sind g�ltig
	auto d = c;//auto setzt den datentyp automatisch
	int e;
	//decltype(e) f; //nicht initialisierte var f bekommt den selben typen wie e(?)
	enum typelist {Audi, Mercedes, BMW}  Hersteller; //interessanter Datentyp: typelist benennt die enum, dazwischen stehen die werte, die man den Variablen zuweisen darf, dahinter die variablen, die die werte bekommen k�nnen
	Hersteller = Audi;//Audi w�rde hier den Wert 0 zur�ckgeben, Merc 1 und BMW 2
	cout << Hersteller;


	cout << "\n Hello World!\n";//cout ist der stream, der richtung konsole l�uft. Er ist teil der importierten iostream-bibliothek
	return 0;
} 

//SEMIKOLON NICHT VERGESSEN!!!