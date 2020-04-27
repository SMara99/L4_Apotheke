#include "Apotheke.h"
#include "Medikament.cpp"
#include <vector>

using namespace std;

class Apotheke {
private:
	vector<Medikament> Medlist;
public:
	Apotheke();
	~Apotheke();
	//1
	void addMed(); //hinzufugen
	void delMed(); //loschen
	void aktMed(); //aktualisieren
	//2
	void showMed(); //zeigen Med oder alle andere in ABC Reihenfolge
	//3
	void knappMed(); //weniger als cin<<x
	//4
	void preisMed(); //nach Preis gruppiert
	//5
	//undo
	//redo

};