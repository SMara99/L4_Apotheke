#pragma once
#include<string>
#include "MedRepo.h"
#include "Medikament.h"

using namespace std;

//the Controller class contains every search/find/sort functions; most of the functions build a new array containing objects of type Medikament then return the objects of the array in the console
class Controller
{
	friend class Medrepo;

private:
	const Medrepo& mr;
	Controller(const Medrepo& m);
public:
	//prints a list of the objects that contain the target string or all of the objects, if the string is empty
	void find(string target);
	//prints a list of objects that have a menge attribute lower than the input value
	void lower();
	//creates a new array in which the objects are sorted by the prices of the products
	void psort();
};