#ifndef __FOOTHPP__
#define __FOOTHPP__
#include"./Game.hpp"
#include<iostream>
using namespace std;
class Foot:public Game
{
    public:
        Foot();
        ~Foot();
        void start();
        void quit();
        void pause();
        void play();
        void restart();
        void marquer(string equipe);

        void setEquipeA(string equipe);
        void setEquipeB(string equipe);
        void setScoreEquipeA(int score);
        void setScoreEquipeB(int score);

        string getEquipeA();
        string getEquipeB();
        int getScoreEquipeA();
        int getScoreEquipeB();
    private:
        string equipeA;
        string equipeB;
        int scoreEquipeA;
        int scoreEquipeB;
};
#endif