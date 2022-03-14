#include <iostream>
#include "Referee.cpp"
#include "Player.cpp"
#include "HumanPlayer.cpp"
#include "ComputerPlayer.cpp"

using namespace std;

int main(){

    HumanPlayer human = HumanPlayer();
    ComputerPlayer computer = ComputerPlayer();
    Referee referee = Referee();

    //human.setMove('R');  //human
    //computer.setMove('R');  //computer
    cout << referee.refGame(human, computer) << " ";

    //human.setMove('P');  //human
    //computer.setMove('R');  //computer
    cout << referee.refGame(human, computer) << " ";

    //human.setMove('S');  //human
    //computer.setMove('R');  //computer
    cout << referee.refGame(human, computer) << " ";

    //human.setMove('P');  //human
    //computer.setMove('R');  //computer
    cout << referee.refGame(human, computer) << " ";

    //human.setMove('R');  //human
    //computer.setMove('R');  //computer
    cout << referee.refGame(human, computer) << " ";


    // referee.outputResults();

    return 0;
} 