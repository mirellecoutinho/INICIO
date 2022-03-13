#include <stdio.h>

int main(void) {
  
float dinheiro = 100.0;
float p_l = 6.79;
float consumo = 10;

float litros = dinheiro/p_l;

float distancia = litros*consumo;
  
  printf("O VALOR EM LITROS ADQUIRIDOS PARA A VIAGEM É DE: %.2F L\n", litros);

printf("A distância percorrida com a quantidade abastecida é de: %2.f KM\n", distancia);




  
  return 0;
}