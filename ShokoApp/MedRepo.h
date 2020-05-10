#pragma once
#include<string>
#include<vector>
#include "Medikament.h"

using namespace std;

//class Controller; 
//Medrepo is a dynamic array which stores objects of type Medikament
class Medrepo
{
	//friend class Controller;

private:
	Medikament* liste;
	int len;
	int cap;

public:
	//constructor
	Medrepo();
	int getlen();
	int getcap();
	Medikament* getlist();
	//adds a new value to the end of the array, updates it if the item already exists
	vector<Medikament> add(Medikament m);
	//updates a specified element; returns true if the operation is successful and false otherwise
	vector<Medikament> update(string name, double konz, Medikament newmed);
	//removes a specified element
	vector<Medikament> remove(string name, double konz);
	//returns the objects that have a specific string inside of them
	vector<Medikament> FindString(string target);
	//returns all objects with a lower menge value than the selected one
	vector<Medikament> MengeLowerThan(int menge);
	//sorts the objects in the array by price(descending)
	vector<Medikament> PriceSort();
	//links the two classes
	//Controller control() const;
};
