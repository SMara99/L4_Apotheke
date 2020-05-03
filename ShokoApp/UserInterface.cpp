#include "Medcontrol.h"
#include "MedRepo.h"
#include "Medikament.h"
#include "UserInterface.h"
#include <iostream>
#include <string>

using namespace std;

int menu(Medrepo arr)
{
	Controller ctr = arr.control();
	int option;
	bool on = true;
	while (on != false) {
		cout << "*******************************\n";
		cout << " 1) Display all objects\n";
		cout << " 2) Add item\n";
		cout << " 3) Remove item\n";
		cout << " 4) Update item\n";
		cout << " 5) Find string\n";
		cout << " 6) Find by attribute\n";
		cout << " 7) Sort by price(descending)\n";
		cout << " 8) Exit.\n";
		cout << "Columns: name; concentration; menge; price\n";
		cout << " Enter your choice and press return: ";

		cin >> option;
		
		cout << endl;

		switch (option)
		{
		case 1:
		{	cout << "Here are the objects\n";
			
			for (int i = 0; i < arr.getlen(); i++) //returns all of the elements
			{
				cout << arr.getlist()[i].get_name() << " " <<arr.getlist()[i].get_konz() << " " << arr.getlist()[i].get_menge() << " " << arr.getlist()[i].get_preis() << endl;
			}
			break;
		}
		case 2:
		{
			//add
			cout << "Adding item\n";
			Medikament m;
			m.set_name("Random");
			arr.add(m);
			int i = arr.getlen() - 1; //prints the newly added element
			cout << arr.getlist()[i].get_name() << " " << arr.getlist()[i].get_konz() << " " << arr.getlist()[i].get_menge() << " " << arr.getlist()[i].get_preis() << endl;
			break;
		}
		case 3:
		{
			//remove
			string n;//name
			double k;//konzentration
			cout << "Please input name, then the concentration: ";
			cin >> n >> k;
			arr.remove(n, k);
			for (int i = 0; i < arr.getlen(); i++) //returns all of the elements
			{
				cout << arr.getlist()[i].get_name() << " " << arr.getlist()[i].get_konz() << " " << arr.getlist()[i].get_menge() << " " << arr.getlist()[i].get_preis() << endl;
			}
			break;
		}
		case 4:
		{
			//update
			Medikament aux;
			aux.set_konz(17);
			aux.set_name("New");
			aux.set_menge(13);
			aux.set_preis(17);
			string n;//name
			double k;//konzentration
			cout << "Please input name, followed by the concentration: ";
			cin >> n >> k;
			arr.update(n, k, aux);
			for (int i = 0; i < arr.getlen(); i++) //prints all of the elements
			{
				cout << arr.getlist()[i].get_name() << " " << arr.getlist()[i].get_konz() << " " << arr.getlist()[i].get_menge() << " " << arr.getlist()[i].get_preis() << endl;
			}
			break;
		}
		case 5:
		{
			//search
			string t;
			cout << "Please input desired string: ";
			cin >> t;
			ctr.find(t);
			break;
		}
		case 6:
		{
			//values lower than
			ctr.lower();
			break;
		}
		case 7:
		{
			ctr.psort();
			break;
		}
		case 8:
			cout << "End of Program.\n";
			on = false;
			break;
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> option;
			break;
		}
	}
	return 0;
}

