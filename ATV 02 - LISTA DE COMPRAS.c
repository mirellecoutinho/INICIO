#include <stdio.h>

int main(void) {
  
float fubá= 1.85;
float feijão = 6.9 ;
float açúcar = 2.5;
float arroz = 3.50;
  
float carrinho = (5*feijão + 5*fubá + 10*açúcar + 3* arroz);

  
  printf("O valor da sua compra é: R$%.2f\n",carrinho);




  
  return 0;
}