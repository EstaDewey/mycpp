#include <iostream>
#include "GameInterface.h"
#include "ChoicePet.h"
#include "Attribute.h"
#include "Parcel.h"
#pragma <comment(lib,"WinMM.Lib")>
using namespace std;

int main()
{

    PlaySound("./x.wav",NULL,SND_FILENAME|SND_ASYNC |SND_LOOP);
    StartScreen();
    Sleep(3000);
    PetAttribute();
    GameInterface();
    return 0;
}
