#ifndef __MOTO_CPP__
#define __MOTO_CPP__

#include "../header/Moto.hpp"
#include <iostream>
using namespace std;

Moto::Moto()
{
	cout << "Moto créé" << endl;
}

void Moto::conduire() const
{
	cout << "Tourner le guidant" << endl;
}

Moto::~Moto()
{

}

#endif