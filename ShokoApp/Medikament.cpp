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
	Medikament(char* new_name, double new_konz, int new_menge, double new_preis);
	~Medikament();

	
	char set_name(char *new_name);
	double set_konz(double new_konz);
	int set_menge(int new_menge);
	double set_preis(double new_preis);

	
	char get_name();
	void get_konz();
	void get_menge();
	void get_preis();
};