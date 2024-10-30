#include "rockPaperScissors.h"
// livg - CSCN712024F
// assignment 3
// ROCK PAPER SCISSORS!	

int main(void) {
    printf("Result: %s\n", rockPaperScissors("rock", "rock")); // Expected: draw
    printf("Result: %s\n", rockPaperScissors("rock", "paper")); // Expected: player2
    printf("Result: %s\n", rockPaperScissors("scissors", "paper")); // Expected: player1
    printf("Result: %s\n", rockPaperScissors("ROCK", "SCISSORS")); // Expected: invalid due to case sensitivity
    printf("Result: %s\n", rockPaperScissors("rock", "lizard")); // Expected: invalid
    return 0;
}