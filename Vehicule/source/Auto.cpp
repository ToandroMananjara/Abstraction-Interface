#ifndef __AUTO_CPP__
#define __AUTO_CPP__

#include "../header/Auto.hpp"
#include <iostream>
using namespace std;

Auto::Auto()
{
	cout << "Automobile creer" << endl;
}

void Auto::conduire() const
{
	cout << "Tourner le volant!" << endl;
}

Auto::~Auto()
{
	
}

#endif
