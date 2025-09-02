#include <stdio.h>

int main() {
    int * ponteiro; //ponteiro
    int ** ponteiro2; // o
    int coisa = 15; //outra var

      ponteiro = &coisa;
      ponteiro2 = &ponteiro;

      printf("1 O valor iniciado de coisa  é: %d  \n", coisa);
      printf("2 O valor apontado de coisa é: %d \n", *ponteiro);
      printf("3 O segundo ponteiro aponta para o primeiro que tem o valor: %x \n", *ponteiro2);
      printf("4 O segundo ponteiro aponta para o primeiro que tem o valor: %x \n", ponteiro2);
      printf("5 O endereço apontado de coisa  é: %x \n", ponteiro);
      printf("6 O endereço atribuido de coisa  é: %x \n", &coisa);

    return 0;
}