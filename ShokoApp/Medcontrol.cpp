#include<iostream>
#include<string>
#include "MedRepo.h"
#include "Medikament.h"
#include "Medcontrol.h"

using namespace std;

Controller::Controller(const Medrepo& m) : mr(m) //allows us to use the previously created array
{

}

void Controller::find(string target)
{
	int tval,laux = 0; //target value
	Medikament* aux;
	aux = new Medikament[mr.cap]; //creates a new dynamic array which will only contain the objects that fit the given criteria

	for (int i = 0; i < mr.len; i++)
	{
		if (target.compare(mr.liste[i].get_name) <= 0)
		{
			aux[i] = mr.liste[i];
			laux++;
		}
	}

	//prints the objects inside of the array
	for (int j = 0; j < laux; j++)
	{
		cout << aux[j].get_name() << aux[j].get_konz() << aux[j].get_menge() << aux[j].get_preis() << endl;
	}
}

void Controller::lower()
{
	int laux = 0; //target value,length of new array
	string tval;
	Medikament* aux; 
	aux = new Medikament[mr.cap]; //creates a new dynamic array which will only contain the objects that fit the given criteria
	cin >> tval;
	//if the string is empty the original array will be displayed
	if (tval == "")
		for (int j = 0; j < mr.len; j++)
		{
			cout << mr.liste[j].get_name() << mr.liste[j].get_konz() << mr.liste[j].get_menge() << mr.liste[j].get_preis() << endl;
		}
	else
	{
		for (int i = 0; i < mr.len; i++)
		{
			if (mr.liste[i].get_menge == tval)
			{
				aux[i] = mr.liste[i];
				laux++;
			}
		}

		for (int j = 0; j < laux; j++)
		{
			cout << aux[j].get_name() << aux[j].get_konz() << aux[j].get_menge() << aux[j].get_preis() << endl;
		}
	}
}

void Controller::psort()
{
	int tval;
	Medikament aux;
	//sorts the array
	for (int i = 0; i < mr.len-1; i++)
	{
		for (int j = i+1;j <mr.len;j++)
			if (mr.liste[i].get_preis() < mr.liste[j].get_preis())
			{
				aux = mr.liste[i];
				mr.liste[i] = mr.liste[j];
				mr.liste[j] = aux;
			}
	}

	for (int j = 0; j < mr.len; j++)
	{
		cout << mr.liste[j].get_name() << mr.liste[j].get_konz() << mr.liste[j].get_menge() << mr.liste[j].get_preis() << endl;
	}
}