#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TMAX 20

void cadastrar();
void menu();
void listar();
void deletar();

void deletar() {
int codigo;
  listar();
  printf("\nQual código do paciente é necessário deletar:\n");
  scanf("%d", &codigo);
--codigo;
pacientes[codigo].ativo=0;
printf("\nPaciente excluido do sistema!\n");

 getchar();
  }
