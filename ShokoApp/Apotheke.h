#pragma once
#include<iostream>
#include <vector>
#include "Medikament.h"

using namespace std;

class Apotheke {
private:
	vector<Medikament> Medlist;
public:
	Apotheke();
	~Apotheke();
	vector<Medikament>* get_Medlist();

	//1
	void addMed(Medikament new_med); //hinzufugen
	void delMed(Medikament med); //loschen
	void aktMed(Medikament old_med, Medikament akt_med); //aktualisieren
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