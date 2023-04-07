/*
Portuguese
decription: this program ask for integer numbers input until you find the
secret number, you will have 10 attemps
*/

#include <stdio.h>

int main(void) {

  // Guarda o numero escolhido
  int numero_secreto = 27;
  int achou = 0;

  printf("Adivinhe o número secreto!\n");
  printf("Você tem 10 tentativas...\n");
  while (achou == 0) {
    // ler o palpite do usuário
    int palpite_jogador;
    printf("\nQual seu palpite? :");
    scanf("%d", &palpite_jogador);

    // compare o valor do jogador com o valor do computador
    if (palpite_jogador == numero_secreto) {
      printf("Você acertou o número secreto!!!");
      achou = 1;
    }
    else{
      printf("Número incorreto!\n");
    }
  }
  return 0;
}
