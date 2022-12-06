#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cadastro.h"
#include "menu.h"
#include "listar.h"
#include "deletar.h"
#define TAMMAX 10


int main(void) {
  
char usuario[TAMMAX];
char  senha[TAMMAX];

printf("\n\nBem vindo ao sistema HopeLife\n");
  
printf("\nDigite o usuário:\n");
scanf("%s", usuario);

printf("\nDigite a senha:\n");
scanf(" %s", senha);  

  while (strcmp(usuario, senha)==0){

    // se senha for igual ao usuário
    //mostrará uma mensagem informando que a senha é inválida.
    
     printf("\nSenha inválida!\n Usuário e senha não podem ser iguais!\n");
    
    //mostrará uma mensangem solicitando uma nova senha.
    
     printf("\nDigite a senha novamente:\n");
    
    //arquivamento da nova senha.
     scanf("%s", senha);
  }
// se senha for diferente do usuario.
// mostrará uma mensagem informando que a senha é válida.
  
     printf("\nSenha válida\n");

  menu();
 cadastrar();
  listar();
  deletar();
  
  return 0;
}





