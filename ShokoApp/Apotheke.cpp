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
	vector<Medikament>* get_Medlist();

	//1
	void addMed(Medikament new_med); 
	void delMed(Medikament med); 
	void aktMed(Medikament old_med, Medikament akt_med); 
	//2
	void showMed(string name); 
	//3
	void knappMed(int menge); //weniger als cin<<x
	//4
	void preisMed(); //nach Preis gruppiert
	//5
	//undo
	//redo

};