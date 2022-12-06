#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TMAX 20

typedef struct {
  
  char nome[50];
  int idade;
  char sexo;
  int telefone;
  int ativo;
  char tipoExame[50];
} cadastroPaciente;

cadastroPaciente pacientes[TMAX];

void menu();
void cadastrar();
void listar();
void deletar();

void cadastrar() {
  system("clear");
  
  char nome[50];
  int idade;
  int telefone;
  char sexo;
  char tipoExame[50];
  int opcao;
  int i;

  do {

    printf("\nDigite o nome:\n");
    scanf(" %s", nome);

    printf("\nDigite a idade:\n");
    scanf(" %d", &idade);
    
    while (idade <= 0 || idade > 100){

  // se idade for menor que 0 e maior ou igual a 100.
  //mostrará uma mensagem informando que a idade é inválida.
  
  printf("\nIdade inválida!\n");
  
  //moatrar uma mensagem solicitando novamente a idade.
  
  printf("\nDigite novamente sua idade:\n");

  // arquivamento de valor atribuido a idade 
  scanf(" %i", &idade);
}
  printf("\nIdade válida!\n");

printf("\nDigite o seu sexo: Feminino - 'F', Masculino - 'M', Não informar - 'N'\n");
  //arquivamento de valor atribuido ao sexo.
  scanf(" %c", &sexo);
  
// função responsavel por transformar letra minuscula em maiúscula.
  
 sexo = toupper(sexo);

// condição atribuida, sexo deve ser f, m ou n.
  while (sexo != 'F' && sexo != 'M' && sexo != 'N'){

  //se a condicao for verdadeira.
  //mostrará uma mensagem informando que o sexo é inválido.
  
  printf("\nSexo inválido!\n");
  
  //mostrar uma mensagem solicitando novamente o sexo.
  
  printf("\nDigite seu sexo novamente\n");

//função para transformar letra minuscula em maiúscula.
  
  sexo = toupper(sexo);

  //arquivamento de valor atribuido ao sexo.
  
  scanf(" %c", &sexo);
}
  //se a condicao condicao for falsa
  
   printf("\nSexo válido!\n");
  
    printf("\nDigite o telefone:\n");
    scanf(" %d", &telefone);

    printf("\nDigite o tipo de exame:\n");
    scanf(" %s", tipoExame);

    for (i = 0; i < TMAX; ++i) {

      if (pacientes[i].ativo == 0) {

        strcpy(pacientes[i].nome, nome);
        pacientes[i].idade=idade; 
        pacientes[i].sexo=sexo; 
        pacientes[i].telefone=telefone;
        strcpy(pacientes[i].tipoExame, tipoExame);
        pacientes[i].ativo = 1;
        break;
      }
    }
    printf("\n 1 - Continuar\n 0 - Sair\n");
    scanf("%i", &opcao);
  } while (opcao != 0);
}

  