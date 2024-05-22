#include "../Header/Combat.hpp"
#include <iostream>

using namespace std;

Combat::Combat()
{

}

Combat::~Combat()
{

}

void Combat::start()
{
    cout << "Le match commence" << endl;
    santeJoueurA = 100;
    santeJoueurB = 100;
}

void Combat::quit()
{
   cout << "Match quitté" << endl;
}

void Combat::restart()
{
    cout << "Match recommencé" << endl;
    santeJoueurA = 100;
    santeJoueurB = 100;
    Combat::start();
}
void Combat::play()
{
    cout << "le match continue" << endl;
}
void Combat::pause()
{
    cout << "Match en Pause" << endl;
    int choice;
    cout << "1- pour restart" << endl;
    cout << "2- pour play" << endl;
    cout << "3- pour quitter" << endl;
    cin >> choice;
    switch(choice)
    {
        case 1:
            restart();
            break;
        case 2:
            play();
            break;
        case 3:
            quit();
            break;
        default:
            // cout << "Choix invalide" << endl;
            break;
    }
}
void Combat::coup(string joueur)
{
    if(joueur.compare(this->joueurA) == 0){
        santeJoueurA -= 5;
    }
    else {
        santeJoueurB -= 5;
    }
    cout << "Sante" <<endl;
    cout << santeJoueurA << " : " << santeJoueurB << endl;
}

// setter des attributs
void Combat::setJoueurA(string joueur)
{
    this->joueurA = joueur;
}
void Combat::setJoueurB(string joueur)
{
    this->joueurB = joueur;
}
void Combat::setSanteJoueurA(int sante)
{
    this->santeJoueurA = sante;
}     
void Combat::setSanteJoueurB(int sante)
{
    this->santeJoueurB = sante;
}

  // Getter pour les attributs
string Combat::getJoueurA()
{
    return joueurA;
}
string Combat::getJoueurB()
{
    return joueurB;
}
int Combat::getSanteJoueurA()
{
    return santeJoueurA;
}
int Combat::getSanteJoueurB()
{
    return santeJoueurB;
}
  