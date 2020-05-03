#pragma once
#include<string>

using namespace std;

class Medikament
{
private:
	string Name;
	double Konzentration;
	int Menge;
	double Preis;

public:

	Medikament();
	Medikament(string new_name, double new_konz, int new_menge, double new_preis);
	~Medikament();


	void set_name(string new_name);
	void set_konz(double new_konz);
	void set_menge(int new_menge);
	void set_preis(double new_preis);


	string get_name();
	double get_konz();
	int get_menge();
	double get_preis();
};

