#include <stdio.h>
#include <string.h>
#include "cadastro.h"
#include "questionario.h"
#include "animacao.h"
#include "comedia.h"
#include "suspense.h"

//definição do tamanho máx para os vetores

#define TAM 10

int main(void) {
//definição das variáveis.
char usuario[TAM];
char senha[TAM];
int categoria;

//criação da função que auxiliará no cadastro do usuário.
char entraUsuario(char usuario[TAM], char senha[TAM]);
char cadastro;
  
printf("\nSeja Bem-Vindo ao Miindica!!\n\nAqui você pode receber dicas de filmes que eu já assistir e recomendo demais.\n\n");

printf("Antes de tudo é necessário que voce se cadastre, Vamos lá?\n");
  
cadastro = entraUsuario(usuario, senha);
  
printf("\nCadastro realizado!\n");

//função que chamará o questionário para a utilização do site

char questionario(char usuario[TAM], char senha[TAM]);

char resultado;

resultado = questionario(usuario,senha);

//mostrar mensagem informando que o questionário foi respondido.
  
printf("\nQuestionário respondido!\n");

printf("-------------------------------------------------------------------\n");

  // mostrar mensagem solicitando a seleção da categoria.
    printf("\n\nQual categoria de filmes você mais gosta?\n\n 1 - animação\n 2 - comédia\n 3 - suspense\n");

// armazenamento do valor atribuido.
  
  scanf(" %i", &categoria);

// se não for digitado nenhuma das sugestões acima.
  
  while(categoria!= 1 && categoria != 2 && categoria !=3){

     //mostrará uma mensagem informando que a opção é inválida e solicitando a seleção de uma nova categoria.
    
  printf("\n Opção inválida!");
  printf("\n\nEscolha uma nova susgestão:\n");

     // armazenamento do novo valor digitado
  scanf("%i", &categoria);}
  
// mostrar mensagem informando a categoria selecionada.
  printf("\nVocê escolheu a categoria:%i\n", categoria);

  switch (categoria) {

    //função que possibilitará a escolha de uma das categorias.

     case 1:
      //função que mostrará as indicações disponíveis para a categoria animação.
    animacao(usuario, senha);

  break;
    
     case 2:
    //função mostrará as indicações de filmes da categoria comédia.  
    comedia(usuario, senha);
       
  break;

    case 3:
    //função mostrará as indicações de filmes da categoria suspense.
    suspense(usuario, senha);

  break;

  // mostrar mensagem informando que o programa foi encerrado.
    
  default:
    printf("Valor invalido!\n");
    break;
    }
  
// mostrará uma mensagem agradecendo a utilização do programa.
  
 printf("\n\nAproveite o filme!\n\nObrigada por utilizar o MIINDICA!!");
  return 0;
  }
    
