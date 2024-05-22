#include "../Header/Foot.hpp"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string equipeA = "Barca";
    string equipeB = "Real";
    Foot foot = Foot();
    foot.setEquipeA(equipeA);
    foot.setEquipeB(equipeB);
    foot.start();
    foot.marquer(equipeA);
    foot.pause();
    return 0;
}