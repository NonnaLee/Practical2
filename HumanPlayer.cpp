#include <iostream>
#include "HumanPlayer.h"

using namespace std;

    char HumanPlayer::getMove(){
        cout << "Enter move: ";
        char humanMove;
        cin >> humanMove;
        return humanMove;
    };