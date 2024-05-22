#include "../Header/Strategie.hpp"
#include <iostream>
using namespace std;
Strategie::Strategie()
{
}
Strategie::~Strategie()
{
}
void Strategie::start() 
{
    cout << "Le jeu commence" << endl;
}
void Strategie::play()
{
    cout << "le match continue" << endl;
}
void Strategie::quit() 
{
    int choice;
    cout << "Vous voulez vraiment quitter le jeu: (0/1)";
    cin >> choice;
    switch(choice)
    {
        case 0:
            cout << "jeu quitté" << endl;
            break;
        case 1:
            play();
            break;

        default:
            // cout << "Choix invalide" << endl;
            break;
    }
}

void Strategie::pause() 
{
    cout << "En pause.\n Appuyez sur une touche pour continuer..." << endl;
    cin.ignore(); 
}

void Strategie::restart() 
{
    cout << "Nouvelle partie !!" << endl;
    Strategie::start();
}