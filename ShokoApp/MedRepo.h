#pragma once
#include<string>
#include<vector>
#include "Medikament.h"

using namespace std;

class Controller; 
//Medrepo is a dynamic array which stores objects of type Medikament
class Medrepo
{
	friend class Controller;

private:
	Medikament* liste;
	int len;
	int cap;

public:
	//dconstructor
	Medrepo();
	//adds a new value to the end of the array, updates it if the item already exists
	Medikament add(Medikament m);
	//updates a specified element; returns the full list if the update is successful and the new value if the target is not found
	Medikament update(string name, double konz, Medikament newmed);
	//removes a specified element
	string remove(string name, double konz);
	//links the two classes
	Controller control() const;
};
