#pragma once
#include<string>
#include "MedRepo.h"
#include "Medikament.h"

using namespace std;

//the Controller class prints the results of Medrepo's functions
class Controller
{
	friend class Medrepo;

private:
	Medrepo list;

public:
	//constructor
	Controller(Medrepo repo);
	//prints all elements;
	void printAll();
	//prints the resulting vector following the "add" operation
	void printAdd(Medikament obj);
	//prints the resulting vector after a removal operation
	void printRemove(string name, double konz);
	//prints a vector containing the updated elements
	void printUpdate(string name, double konz, Medikament newel);
	//prints a list of the objects that contain the target string or all of the objects, if the string is empty
	void printFindString(string target);
	//prints a list of objects that have a menge attribute lower than the input value
	void printMengeLowerThan(int menge);
	//creates a new array in which the objects are sorted by the prices of the products
	void printSorted();
};