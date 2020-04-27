#pragma once

Medikament::Medikament() {
	//constructor ohne datentyp
	*Name = '\0';
	Konzentration = 0;
	Menge = 0;
	Preis = 0;
};

Medikament::Medikament(char *new_name, double new_konz, int new_menge, double new_preis) {
	*Name = new_name;
	Konzentration = new_konz;
	Menge = new_menge;
	Preis = new_preis;
};

Medikament::~Medikament() {
	//destructor
};

char Medikament::set_name(char *new_name) {
	//setter name
	*Name = new_name;
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

char Medikament::get_name() {
	return this->Name;
};