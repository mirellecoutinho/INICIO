#include <stdio.h>
#include <string.h>

// função que fara  casdastro do usuario no sistema.

char entraUsuario(char tus[], char tsen[]){

// declaração de variável de retorno.
// res = resposta do casdastro.
  
char res=0;

//mensagem solicitando o usuário.
  
 printf("\nDigite seu nome de usuário:\n");
  
// arquivamento do valor atribuído.
  
 scanf("%s", tus);

//mensagem solicitando a senha.
  
 printf("\nDigite sua senha:\n");
  
//arquivamento do valor atribuido a senha 
  
 scanf("%s",tsen);

// condição atribuida, senha deve ser diferente do usuário.
  
  while (strcmp(tus, tsen)==0){

    // se senha for igual ao usuário
    //mostrará uma mensagem informando que a senha é inválida.
    
     printf("\nSenha inválida!\n Usuário e senha não podem ser iguais!\n");
    
    //mostrará uma mensangem solicitando uma nova senha.
    
     printf("\nDigite a senha novamente:\n");
    
    //arquivamento da nova senha.
     scanf(" %s", tsen);
  }
// se senha for diferente do usuario.
// mostrará uma mensagem informando que a senha é válida.
  
printf("\nSenha válida\n");

// retornará para a função main o resultado do cadastramento.
  
return res;
}
