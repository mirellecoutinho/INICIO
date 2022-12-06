#include <stdio.h>

//função responsável por mostrar sugestoes de filmes de comedia.

char comedia(char tus[],char tsen[]){

// declaracao de variável de retorno.
// escom = escolha do filme de comédia.
  
int escom;

//mostrar mensagem informando as sugestões.
  printf("\nSugestões:");
    printf("\n 1 - As branquelas\n 2 - Megarromântico\n 3 - Todo poderoso\n");
  
  //mostrar mensagem pedindo para que seja escolhido a opção de filme.
  
      printf("\nEscolha uma sugestão para ter mais informações:\n");

//arquivamento de valor atribuido a variavel.
      scanf("%i", &escom);

   // se não for digitado nenhuma das sugestões acima.
  while(escom!= 1 && escom != 2 && escom !=3){

     //mostrará uma mensagem informando que a opção é inválida e solicitando a seleção de uma nova susgestão.
    
  printf("\n opção inválida!");
  printf("\n\nEscolha uma nova susgestão:\n");

    // armazenamento do novo valor digitado
    
  scanf("%i", &escom);}

  //funcao que possibilitará a escolha de uma das opções sugeridas.
  
  switch(escom){

    // condição para que a primeira opção seja selecionada.
    // a primeira opção so odera ser selecionada se o numero 1 for digitado.
    
  case 1:
    
//mostrará uma mensagem com sinópse do filme selecionado e onde assisti-lo.
  
      printf("\n\nAs Branquelas\n\nSinopse:\n\nDois irmãos agentes do FBI, Marcus e Kevin Copeland, acidentalmente evitam que bandidos sejam presos em uma apreensão de drogas. Como castigo, eles são forçados a escoltar um par de socialites nos Hamptons. Porém, quando as meninas descobrem o plano da agência, se recusam a ir. Sem opções, Marcus e Kevin decidem posar como as irmãs, transformando-se de homens afro-americanos em um par de loiras.\n\nOnde assistir:\nGloboplay\nTelecine\nPrime video");
break;

    // condição para que a segunda opção seja selecionada.
    // a segunda opção so poderá ser selecionada se o numero 2 for digitado.
    
  case 2:
  
//mostrará uma mensagem com sinópse do filme selecionado e onde assisti-lo.
    
    printf("\nMegarrromântico\n\nSinopse:\n\n Cínica em relação ao amor e desprezada em seu trabalho de Nova York, a arquiteta Natalie não acredita em romances e finais felizes. Depois de sofrer um golpe na cabeça durante uma briga com um assaltante no metrô, Natalie acorda em um universo paralelo e se vê interpretando a protagonista de uma comédia romântica na vida real.\n\nOnde assistir:\nNetflix\nPrime video");
break;
  
// condição para que a terceira opção seja selecionada.
    // a terceira opção so poderá ser selecionada se o numero 3 for digitado.
    
    case 3:

//mostrará uma mensagem com sinópse do filme selecionado e onde assisti-lo.
    
    printf("\nTodo Poderoso\n\nSinopse:\n\nBruce Nolan é um jornalista que tem a vida perfeita. Quando as coisas começam a dar errado, Bruce questiona Deus e a forma como ele comanda a Terra. Então, o Todo Poderoso dá a Bruce todos seus poderes. Mas Bruce se dá conta de como é difícil ser onisciente, onipresente e onipotente.\n\nOnde assistir:\nPrime vídeo\nStar+");
break;

// após a utilização do programa, ele será encerrado.
    
 default:
    printf("\nPrograma encerrado!\n");
 break;
}
  
  // /retornará para o main a escolhada do filme de comedia.
return escom;
  }