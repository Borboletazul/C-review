/*
Translated from Portuguese.
decription: this program ask for integer numbers input until you find the
secret number, you will have 10 attemps
*/

#include <stdio.h>

int main(void) {

  // Save the secret number as integer (int)
  int secret_number = 27;
  //got the variable of the loop
  int got_it = 0;

  //presentation
  printf("Guess the secret number!\n");
  printf("You have 10 attemps...\n");
  
  //goes into the While loop until the player's answer match
  while (got_it == 0) {
    // declare and read(scanf) the player guess
    int player_guess;
    printf("\nGo on! Have a Guess:");
    scanf("%d", &player_guess);

    // compare o valor do jogador com o valor do computador
    if (player_guess == secret_number) {
      printf("Hit!You Got it!!");
      got_it = 1;
    }
    else{
      printf("Incorrect number!\n");
    }
  }
  return 0;
}
