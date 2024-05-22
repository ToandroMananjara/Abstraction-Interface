#ifndef __VEHICULE_CPP__
#define __VEHICULE_CPP__

#include "../header/Vehicule.hpp"
#include <string>
using namespace std;
Vehicule::Vehicule()
{
}

Vehicule::~Vehicule()
{
}
void Vehicule::setMarque(string marque)
{
	this->marque = marque;
}
string Vehicule::getMarque() const
{
	return marque;
}

#endif