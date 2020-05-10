#include<iostream>
#include<string>
#include "MedRepo.h"
#include "Medikament.h"
#include "Medcontrol.h"

using namespace std;


Controller::Controller(Medrepo repo)
{
	list = repo;
}

void Controller::printAll()
{
	for(int i = 0; i<list.getlen(); i++)
		cout << list.getlist()[i].get_name() << " " << list.getlist()[i].get_konz() << " " << list.getlist()[i].get_menge() << " " << list.getlist()[i].get_preis() << endl;
}

void Controller::printAdd(Medikament obj)
{
	vector<Medikament> added = list.add(obj);
	for (auto it : added)
		cout << it.get_name() << " " << it.get_konz() << " " << it.get_menge() << " " << it.get_preis() << endl;
}

void Controller::printRemove(string name, double konz)
{
	vector<Medikament> removed = list.remove(name, konz);
	for(auto it : removed)
		cout << it.get_name() << " " << it.get_konz() << " " << it.get_menge() << " " << it.get_preis() << endl;
}

void Controller::printUpdate(string name, double konz, Medikament newel)
{
	vector<Medikament> updated = list.update(name, konz, newel);
	for (auto it : updated)
		cout << it.get_name() << " " << it.get_konz() << " " << it.get_menge() << " " << it.get_preis() << endl;
}

void Controller::printFindString(string target)
{
	vector<Medikament> found = list.FindString(target);
	for (auto it : found)
		cout << it.get_name() << " " << it.get_konz() << " " << it.get_menge() << " " << it.get_preis() << endl;
}

void Controller::printMengeLowerThan(int menge)
{
	vector<Medikament> lower = list.MengeLowerThan(menge);
	for (auto it : lower)
		cout << it.get_name() << " " << it.get_konz() << " " << it.get_menge() << " " << it.get_preis() << endl;
}

void Controller::printSorted()
{
	vector<Medikament> sort = list.PriceSort();
	for (auto it : sort)
		cout << it.get_name() << " " << it.get_konz() << " " << it.get_menge() << " " << it.get_preis() << endl;
}

