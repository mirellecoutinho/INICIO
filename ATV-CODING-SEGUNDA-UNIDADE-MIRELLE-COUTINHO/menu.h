#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TMAX 20

void cadastrar();
void listar();
void deletar();

void menu() {
  system("clear");
  int opcao;
  do {
    printf("\n Digite a opção desejada:\n");
    printf("\n 1 - Incluir Cadastro");
    printf("\n 2 - Listar pacientes");
    printf("\n 3 - Deletar cadastro");
    printf("\n 0 - Finalizar programa\n");
    scanf("%d", &opcao);
    getchar();

    switch (opcao) {
    case 1:
      cadastrar();
      break;
    case 2:
      listar();
      break;
    case 3:
      deletar();
      break;
      
    default:
      break;
    }
    
  } while (opcao != 0); 
  printf("\nPrograma finalizado!");
  getchar();
  
}