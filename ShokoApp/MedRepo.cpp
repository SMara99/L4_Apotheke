#include<iostream>
#include<string>
#include<vector>
#include "MedRepo.h"
#include "Medikament.h"
#include "Medcontrol.h"

using namespace std;


Medrepo::Medrepo()
{
	len = 0; //length; will be followed and updated throughout the program
	cap = 8; //capacity; doubled if l reaches it
	liste = new Medikament[cap];
}

Medikament Medrepo::add(Medikament m)
{

	int p, aux;

	if (len == cap) //doubles the array's capacity
	{
		cap *= 2;
		Medikament* aux_pointer = new Medikament[cap];
		for (int i = 0; i < len; i++) {
			aux_pointer[i] = liste[i];
		}
		delete liste;
		liste = aux_pointer;
	}

	for (int i = 0; i < len; i++)
	{
		if (liste[i].get_konz() == m.get_konz() && liste[i].get_name() == m.get_name())
		{
			liste[i] = m;
			return liste[i];
		}
	}

	liste[len] = m;
	len++;
	return liste[len - 1];
}

Medikament Medrepo::update(string name, double konz, Medikament newmed)
{
	for (int i = 0; i < len; i++)
	{
		if (liste[i].get_konz == konz && liste[i].get_name == name)
		{
			liste[i] = newmed;
			return liste;
		}
	}
	return (newmed);
}

string Medrepo::remove(string name, double konz)
{
	for (int i = 0; i < len; i++)
	{
		if (liste[i].get_konz == konz && liste[i].get_name == name)
		{
			for (int j = i; j < len - 1; j++)
				liste[j] = liste[j + 1];
			len--;
			return("Removal successful");
		}
	}
	return("Invalid target");
}

Controller Medrepo::control() const
{
	return Controller(*this);
}

