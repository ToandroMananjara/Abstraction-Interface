#ifndef __COMBATHPP__
#define __COMBATHPP__
#include"./Game.hpp"
#include<iostream>
#include<string>
using namespace std;
class Combat:public Game
{
    public:
        Combat();
        ~Combat();
        void start();
        void quit();
        void pause();
        void play();
        void restart();
        void coup(string joueur);

        void setJoueurA(string joueur);
        void setJoueurB(string joueur);
        void setSanteJoueurA(int sante);
        void setSanteJoueurB(int sante);

        string getJoueurA();
        string getJoueurB();
        int getSanteJoueurA();
        int getSanteJoueurB();
    protected:
        string joueurA;
        string joueurB;
        int santeJoueurA;
        int santeJoueurB;
};
#endif