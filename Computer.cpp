#include "Computer.h"
#include <iostream>
#include <cstdlib>


using namespace std;

char getComputerMove() {
		char moves[3] = {'R','S','P'};
		int computerMove = rand() % 3;
		return moves[computerMove];
		
};

