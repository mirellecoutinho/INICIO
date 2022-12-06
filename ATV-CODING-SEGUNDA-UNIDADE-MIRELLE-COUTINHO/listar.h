#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TMAX 20

void cadastrar();
void menu();
void deletar();


void listar() {
  system("clear");
  printf("\nLista de pacientes cadastrados\n");
  for (int i = 0; i < TMAX; i++) {
    if (pacientes[i].ativo == 1) {
      printf("\n\nCódigo: %d\n", i+1);
      printf("Nome do pacinte: %s\n", pacientes[i].nome);
      printf("Idade do pacinte: %d\n", pacientes[i].idade);
      printf("sexo do pacinte: %c\n", pacientes[i].sexo);
      printf("Telefone do pacinte: %d\n", pacientes[i].telefone);
      printf("Tipo de exame agendado: %s\n", pacientes[i].tipoExame);
    
      
    }

    }
  getchar();
  }

  

