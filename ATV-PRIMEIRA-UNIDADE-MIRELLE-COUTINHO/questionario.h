#include <stdio.h>
#include <string.h>

// função responsável pelo questionário.
char questionario(char tus[], char tsen[]){

//declaração de variáveis idade, sexo e resultado.
  
int idade;
char sexo;
char resultado = 0;

//mostrar uma mensagem solicitando a idade do usuário.
  
printf("\nDigite sua idade:\n");

//arquivamento de valor atribuido a idade.
  
scanf(" %d", &idade);

//condição atribuida, idade deve ser maior que zero e menor ou igual a cem.

while (idade <= 0 || idade > 100){

  // se idade for menor que 0 e maior ou igual a 100.
  //mostrará uma mensagem informando que a idade é inválida.
  
  printf("\nIdade inválida!\n");
  
  //moatrar uma mensagem solicitando novamente a idade.
  
  printf("\nDigite novamente sua idade:\n");

  // arquivamento de valor atribuido a idade 
  scanf(" %i", &idade);
}
// se a condicao imposta a idade estiver correta.
// mostrará mensagem informando que a idade é valida.
  
printf("\nIdade válida!\n");

// mostrar mensagem solicitando o sexo.
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
  
  scanf("%c", &sexo);
}
  //se a condicao condicao for falsa
  
printf("\nSexo válido!\n");
  
//retornará para a funcao main o resultado do questionário.
  
return resultado;
  
}
