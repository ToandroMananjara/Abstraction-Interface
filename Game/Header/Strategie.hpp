#ifndef __STATEGIEHPP__
#define __STATEGIEHPP__
#include"./Game.hpp"
class Strategie:public Game 
{
    public:
        Strategie();
        ~Strategie();
        void start();
        void quit();
        void play();
        void pause();
        void restart();
};
#endif