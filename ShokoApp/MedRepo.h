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
	//returns the length of the array
	int getlen();
	//returns the capacity of the array
	int getcap();
	Medikament* getlist();
	//adds a new value to the end of the array, updates it if the item already exists
	Medikament add(Medikament m);
	//updates a specified element; returns true if the operation is successful and false otherwise
	bool update(string name, double konz, Medikament newmed);
	//removes a specified element
	string remove(string name, double konz);
	//links the two classes
	Controller control() const;
};
