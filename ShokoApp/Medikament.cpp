#include "Medikament.h"
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

	
	string set_name(string new_name);
	double set_konz(double new_konz);
	int set_menge(int new_menge);
	double set_preis(double new_preis);

	
	string get_name();
	double get_konz();
	int get_menge();
	double get_preis();
};