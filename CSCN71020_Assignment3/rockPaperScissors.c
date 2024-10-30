#include "rockPaperScissors.h"


char* rockPaperScissors(char* player1, char* player2) {

	char* acceptedInput[] = { "rock", "paper", "scissors" };
	int player1Valid = 0, player2Valid = 0;

	for (int i = 0; i < 3; i++) {
		if (strcmp(player1, acceptedInput[i]) == 0) {
			player1Valid = 1;
		}
		if (strcmp(player2, acceptedInput[i]) == 0) {
			player2Valid = 1;
		}
	}

	if (!(player1Valid) || !(player2Valid)) {
		return "invalid!";
	}

	if (strcmp(player1, player2) == 0) {	
		return "draw";
	}
	else if (strcmp(player1, "rock") == 0 && strcmp(player2, "scissors") == 0 || strcmp(player1, "paper") == 0 && strcmp(player2, "rock") == 0 || strcmp(player1, "scissors") == 0 
		&& strcmp(player2, "paper") == 0) {
		return "player1";
	}
	else {
		return "player2";
	}
	
}