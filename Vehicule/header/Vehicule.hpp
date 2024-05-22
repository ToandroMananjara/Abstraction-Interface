#ifndef __VEHICULE_HPP__
#define __VEHICULE_HPP__
#include <string>
using namespace std;
class Vehicule
{
	public:
		Vehicule();
		~Vehicule();
		virtual void conduire() const = 0;
		void setMarque(string marque);
		string getMarque() const;
	protected:
		string marque;
};

#endif
