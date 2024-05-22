#ifndef __GAMEHPP__
#define __GAMEHPP__

class Game
{
    public:
        virtual void start() = 0;
        virtual void pause() = 0;
        virtual void play() = 0;
        virtual void quit() = 0;
        virtual void restart() = 0;
};

#endif