#include "../Header/Foot.hpp"
#include "../Header/Strategie.hpp"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string equipeA = "Barca";
    string equipeB = "Real";
    Foot foot = Foot();
    Strategie strategie = Strategie();

    cout << " Debut foot " << endl;
    foot.setEquipeA(equipeA);
    foot.setEquipeB(equipeB);
    foot.start();
    foot.marquer(equipeA);
    foot.pause();
    cout << " Fin foot " << endl;

    cout << " Debut Strategie " << endl;
    strategie.start();

    cout << " Fin Strategie " << endl;

    return 0;
}