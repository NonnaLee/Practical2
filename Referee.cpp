#include <iostream>
#include "Referee.h"
#include "Computer.h"
#include "Human.h"

using namespace std;

char getMove(char humanMove, char computerMove) {
	char result = 'T';
	if (humanMove == computerMove) {
		return result;
	}
	else {
		if (humanMove == 'R' && computerMove == 'S' ||
			humanMove == 'S' && computerMove == 'P' ||
			humanMove == 'P' && computerMove == 'R') {
			result = 'W';
		}
		else {
			result = 'L';
		}
		return result;
	}

	cout << "Result: " << result << endl;

};