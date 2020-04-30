#pragma once
#include<string>
#include<vector>
#include "Medikament.h"

using namespace std;

//Medrepo is a dynamic array which stores objects of type Medikament
class Medrepo
{
private:
	Medikament* liste;
	int len;
	int cap;

public:
	//dconstructor
	Medrepo();
	//adds a new value to the end of the array, updates it if it already exists
	Medikament add(Medikament m);
	//updates a specified element
	Medikament update(string name, double konz, Medikament newmed);
	//removes a specified element
	Medikament remove(string name, double konz);
};
