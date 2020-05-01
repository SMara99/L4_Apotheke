#include "Apotheke.h"
#include "Medikament.cpp"
#include <vector>

using namespace std;

Apotheke::Apotheke() {};

vector<Medikament>* Apotheke::get_Medlist() {
	vector<Medikament>* temp;
	temp = &this->Medlist;
	return temp;
};

void Apotheke::addMed(Medikament new_med) {
	//Medikament einfugen, Menge andern sonst

	int temp = -1;

	for (int i = 0; i < Medlist.size(); i++) {
		if (Medlist[i].get_name() == new_med.get_name() && Medlist[i].get_konz() == new_med.get_konz())
			temp = i;
	};

	if (temp = -1)
		this->Medlist.push_back(new_med);
	else
		this->Medlist[temp].set_menge(this->Medlist[temp].get_menge() + new_med.get_menge());
};

void Apotheke::delMed(Medikament med) {
	//Medikamente loschen

	int temp = -1;

	for (int i = 0; i < Medlist.size(); i++) {
		if (Medlist[i].get_name() == med.get_name() && Medlist[i].get_konz() == med.get_konz())
			temp = i;
	};

	if (temp > -1)
		this->Medlist.erase(this->Medlist.begin() + temp);
	else
		cout << "Dieser Medikament war nicht auf der Liste";
};

void Apotheke::aktMed(Medikament old_med, Medikament akt_med) {
	//Medikamente aktualisieren

	int temp = -1;

	for (int i = 0; i < Medlist.size(); i++) {
		if (Medlist[i].get_name() == old_med.get_name() && Medlist[i].get_konz() == old_med.get_konz() &&
			Medlist[i].get_menge() == old_med.get_menge() && Medlist[i].get_preis() == old_med.get_preis())
			temp = i;
	};

	if (temp == -1)
		cout << "Dieser Medikament war nicht auf der Liste";
	else {
		this->Medlist[temp].set_name(akt_med.get_name());
		this->Medlist[temp].set_konz(akt_med.get_konz());
		this->Medlist[temp].set_menge(akt_med.get_menge());
		this->Medlist[temp].set_preis(akt_med.get_preis());
	}
};

void Apotheke::showMed(string name) {
	//Alle Medikamente die der string "name" enthalten werden gezeigt 
	//oder wenn "name" lehr ist, werden alle andere Medikamente, 
	//in Reihenfolge, nach ihren Namen gegeben

	vector<Medikament> cu_string, fara_string;

	if (name == "") {
		fara_string = Medlist;
		for (int i = 0; i < fara_string.size(); i++)
			for (int j = i + 1; j < fara_string.size() - 1; j++)
				if (fara_string[i].get_name() < fara_string[j].get_name()) {
					Medikament aux = fara_string[i];
					fara_string[i] = fara_string[j];
					fara_string[j] = aux;
				}
		//return fara_string;
	}
	else {
		bool gef = 0;
		for (int i = 0; i < Medlist.size(); i++) {
			if (Medlist[i].get_name() == name)
				cu_string.push_back(Medlist[i]); gef = true;
		};
		//if gef return cu_string else printf("Nu avem acest medicament")
	}

};

void Apotheke::knappMed() {

};

Apotheke::~Apotheke() {};
