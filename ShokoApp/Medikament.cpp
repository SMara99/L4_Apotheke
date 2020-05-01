#include "Medikament.h"
#include<string>

using namespace std;

Medikament::Medikament() {
	Name = "";
	Konzentration = 0;
	Menge = 0;
	Preis = 0;
};

Medikament::Medikament(string new_name, double new_konz, int new_menge, double new_preis) {
	this->Name = new_name;
	this->Konzentration = new_konz;
	this->Menge = new_menge;
	this->Preis = new_preis;
};

Medikament::~Medikament() {
	//destructor
};

string Medikament::set_name(string new_name) {
	//setter name
	this->Name = new_name;
};

double Medikament::set_konz(double new_konz) {
	//setter konzentration
	this->Konzentration = new_konz;
};

int Medikament::set_menge(int new_menge) {
	//setter menge
	this->Menge = new_menge;
};

double Medikament::set_preis(double new_preis) {
	//setter preis
	this->Preis = new_preis;
}

string Medikament::get_name() {
	return this->Name;
};

double Medikament::get_konz() {
	return this->Konzentration;
};

int Medikament::get_menge() {
	return this->Menge;
};

double Medikament::get_preis() {
	return this->Preis;
};

