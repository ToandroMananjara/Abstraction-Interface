#include "../Header/Foot.hpp"
#include <iostream>

using namespace std;

Foot::Foot()
{

}

Foot::~Foot()
{

}

void Foot::start()
{
    cout << "Le match commence" << endl;
}

void Foot::quit()
{
   cout << "Match quitté" << endl;
}

void Foot::restart()
{
    cout << "Match recommencé" << endl;
    scoreEquipeA = 0;
    scoreEquipeB = 0;
    Foot::start();
}
void Foot::play()
{
    cout << "le match continue" << endl;
}
void Foot::pause()
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
void Foot::marquer(string equipe)
{
    if(equipe.compare(this->equipeA) == 0){
        scoreEquipeA++;
    }
    else {
        scoreEquipeB++;
    }
    cout << "Score" <<endl;
    cout << scoreEquipeA << " : " << scoreEquipeB << endl;
}

// setter des attributs
void Foot::setEquipeA(string equipe)
{
    this->equipeA = equipe;
}
void Foot::setEquipeB(string equipe)
{
    this->equipeB = equipe;
}
void Foot::setScoreEquipeA(int score)
{
    this->scoreEquipeA = score;
}     
void Foot::setScoreEquipeB(int score)
{
    this->scoreEquipeB = score;
}

  // Getter pour les attributs
string Foot::getEquipeA()
{
    return equipeA;
}
string Foot::getEquipeB()
{
    return equipeB;
}
int Foot::getScoreEquipeA()
{
    return scoreEquipeA;
}
int Foot::getScoreEquipeB()
{
    return scoreEquipeB;
}
  