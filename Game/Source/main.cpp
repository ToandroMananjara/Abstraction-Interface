#include "../Header/Foot.hpp"
#include "../Header/Strategie.hpp"
#include "../Header/Combat.hpp"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string equipeA = "Barca";
    string equipeB = "Real";
    string joueurA = "Tyson Fury";
    string joueurB = "Connor Mc";

    Foot foot = Foot();
    Strategie strategie = Strategie();
    Combat combat = Combat();

    cout << "********************************************" << endl << endl ;

    foot.setEquipeA(equipeA);
    foot.setEquipeB(equipeB);
    foot.start();
    foot.marquer(equipeA);
    foot.pause();

    cout << endl << "********************************************" << endl << endl ;

    cout << "********************************************" << endl << endl;

    strategie.start();

    cout << endl <<"********************************************" << endl << endl ;

    cout << "********************************************" << endl << endl;
    combat.setJoueurA(joueurA);
    combat.setJoueurB(joueurB);
    combat.start();
    combat.coup(joueurB);
    combat.pause();
    cout << endl << "********************************************" << endl << endl ;
    return 0;
}