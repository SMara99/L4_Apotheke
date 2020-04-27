#pragma once

Medikament::Medikament() {
	//constructor ohne datentyp
	Name = "";
	Konzentration = 0;
	Menge = 0;
	Preis = 0;
};

Medikament::Medikament(string new_name, double new_konz, int new_menge, double new_preis) {
	Name = new_name;
	Konzentration = new_konz;
	Menge = new_menge;
	Preis = new_preis;
};

Medikament::~Medikament() {
	//destructor
};

string Medikament::set_name(string new_name) {
	//setter name
	Name = new_name;
};

double Medikament::set_konz(double new_konz) {
	//setter konzentration
	Konzentration = new_konz;
};

int Medikament::set_menge(int new_menge) {
	//setter menge
	Menge = new_menge;
};

double Medikament::set_preis(double new_preis) {
	//setter preis
	Preis = new_preis;
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