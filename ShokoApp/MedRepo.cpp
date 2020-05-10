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

int Medrepo::getlen()
{
	return len;
}

int Medrepo::getcap()
{
	return cap;
}

Medikament* Medrepo::getlist()
{
	return liste;
}

vector<Medikament> Medrepo::add(Medikament m)
{
	bool ok = false;
	vector<Medikament> aux;
	if (len == cap) //doubles the array's capacity if needed
	{
		cap *= 2;
		Medikament* aux_pointer = new Medikament[cap];
		for (int i = 0; i < len; i++) {
			aux_pointer[i] = liste[i];
		}
		delete liste;
		liste = aux_pointer;
	}
	
	//updates an element if it already exists
	for (int i = 0; i < len; i++)
	{
		if (liste[i].get_konz() == m.get_konz() && liste[i].get_name() == m.get_name())
		{
			liste[i] = m;
			ok = true;
		}
	}

	//if the object hasn't been found, then it will be added at the end of the array
	if (ok == false)
	{
		liste[len] = m;
		len++;
	}

	//creates the new vector
	for (int j = 0; j < len; j++)
	{
		aux.insert(aux.end(), liste[j]);
	}
	return aux; //returns new vector
}

vector<Medikament> Medrepo::update(string name, double konz, Medikament newmed)
{
	vector<Medikament> aux;
	for (int i = 0; i < len; i++)
	{
		if (liste[i].get_konz() == konz && liste[i].get_name() == name)
		{
			liste[i] = newmed;
		}
		aux.insert(aux.end(), liste[i]);
	}

	return aux;
}

vector<Medikament> Medrepo::remove(string name, double konz)
{
	vector<Medikament> aux;
	for (int i = 0; i < len; i++)
	{
		if (liste[i].get_konz() == konz && liste[i].get_name() == name)
		{
			for (int j = i; j < len - 1; j++)
				liste[j] = liste[j + 1];
			len--;
			i--;
		}
	}

	for (int j = 0; j < len; j++)
	{
		aux.insert(aux.end(), liste[j]);
	}

	return aux;
}

vector<Medikament> Medrepo::FindString(string target)
{
	int laux = 0; //length of the new array
	vector<Medikament> aux;
	//aux = new Medikament[mr.cap]; //creates a new dynamic array which will only contain the objects that fit the given criteria

	//if the string is empty the original array will be displayed
	if (target == " " || target == "" || target == "\n")
	{
		for (int j = 0; j < len; j++)
		{
			aux.insert(aux.end(), liste[j]);
		}
		return aux;
	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			if (target == liste[i].get_name()) //creates a vector containing only the objects that fir the criteria
			{
				aux.insert(aux.end(), liste[i]);
			}
		}
		return aux;
	}
}

vector<Medikament> Medrepo::MengeLowerThan(int menge)
{
	vector<Medikament> aux;//creates a new vector which will only contain the objects that fit the given criteria
	for (int i = 0; i < len; i++)
	{
		if (liste[i].get_menge() <= menge)
		{
			aux.insert(aux.end(), liste[i]);
		}
	}
	return aux;
}

vector<Medikament> Medrepo::PriceSort()
{
	Medikament aux;
	vector<Medikament> sorted;
	//sorts the array
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
			if (liste[i].get_preis() < liste[j].get_preis())
			{
				aux = liste[i];
				liste[i] = liste[j];
				liste[j] = aux;
			}
	}

	for (int k = 0; k < len; k++)
	{
		sorted.insert(sorted.end(), liste[k]); //creates the sorted vector
	}

	return sorted;
}

