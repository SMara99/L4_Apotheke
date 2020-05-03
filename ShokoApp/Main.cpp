#include<iostream>
#include "UserInterface.h";

using namespace std;

int main()
{
	Medikament a,b,c,d,e;
	a.set_name("a");
	b.set_name("b");
	c.set_name("c");
	d.set_name("d");
	e.set_name("e");
	a.set_konz(11);
	b.set_konz(12);
	c.set_konz(13);
	d.set_konz(14);
	e.set_konz(15);
	a.set_preis(1);
	b.set_preis(2);
	c.set_preis(3);
	d.set_preis(4);
	e.set_preis(5);
	a.set_menge(5);
	b.set_menge(4);
	c.set_menge(3);
	d.set_menge(2);
	e.set_menge(1);
	Medrepo m;
	m.add(a);
	m.add(b);
	m.add(c);
	m.add(d);
	m.add(e);
	menu(m);
	return 0;
}