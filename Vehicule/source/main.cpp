#include "../header/Auto.hpp"
#include "../header/Moto.hpp"
#include <iostream>

int main()
{
	Auto *automobile = new Auto;

	automobile->conduire();
	automobile->setMarque("BMW");
	delete automobile;

	std::cout << "**************" << std::endl;

	Moto *moto = new Moto;

	moto->conduire();
	moto->setMarque("Honda");
	delete moto;

	return (0);
}
