#include <stdio.h>

//função responsável por mostrar sugestoes de filmes de comedia.

char suspense(char tus[],char tsen[]){

// declaração de variável de retorno.
// escsus = escolha do filme de suspense.
  
int escsus;

//mostrar mensagem informando as sugestões
  printf("\nSugestões:\n");
  printf("\n 1 - Hipynotic\n 2 - Garota exemplar\n 3 - Corra! \n");

//mostrar mensagem pedindo para que seja escolhido a opção de filme.
  
      printf("\nEscolha uma sugestão para ter mais informações:\n");

//arquivamento do valor atribuido a variavel 

      scanf("%i", &escsus);

  // se não for digitado nenhuma das sugestões acima.
  while(escsus!= 1 && escsus != 2 && escsus !=3){

  //mostrará uma mensagem informando que a opção é inválida e solicitando a seleção de uma nova susgestão.
  printf("\n opção inválida!");
  printf("\n\nEscolha uma nova susgestão:\n");

  // armazenamento do novo valor digitado
  scanf("%i", &escsus);}

//função que possibilitará a escolha de uma das opções sugeridas.
  
  switch(escsus){

// condição para que a primeira opção seja selecionada.
// a primeira opção so odera ser selecionada se o numero 1 for digitado.
  
  case 1:
    
//mostrará uma mensagem com sinópse do filme selecionado e onde assisti-lo.  
    
      printf("\nHipynotic\n\nSinopse:\n\nSentindo que sua vida está estagnada em todos os aspectos, Jenn busca ajuda na hipnoterapia. Só que acaba envolvida em um jogo psicológico mortal.\n\nOnde assistir:\nNetflix");
break;

// condição para que a segunda opção seja selecionada.
// a segunda opção so odera ser selecionada se o numero 2 for digitado.
    
  case 2:

//mostrará uma mensagem com sinópse do filme selecionado e onde assisti-lo.
    
    printf("\nGarota exemplar\n\nSinopse:\n\nNo dia de seu quinto aniversário de casamento, Amy desaparece. Quando as aparências de uma união feliz começam a desmoronar, Nick, seu marido, torna-se o principal suspeito. Com a ajuda de sua irmã gêmea, ele tenta provar sua inocência, ao mesmo tempo em que investiga o que realmente aconteceu com a mulher.\n\nOnde assistir:\nNetflix\nPrime video\nTelecine\nGloboplay");
break;

// condição para que a terceira opção seja selecionada.
// a terceira opção so odera ser selecionada se o numero 3 for digitado.
    
    case 3:
      
//mostrará uma mensagem com sinópse do filme selecionado e onde assisti-lo.
      
    printf("\nCorra!\n\nSinopse:\n\nChris é um jovem fotógrafo negro que está prestes a conhecer os pais de Rose, sua namorada caucasiana. Com o tempo, ele percebe que a família dela esconde algo muito perturbador.\n\nOnde assistir:\nTelecine");
break;

// quando for digitado qualquer outro numero que n seja os anteriores, o programa será encerrado.
    
 default:

// mostrar mensagem informando que o programa foi encerrado.
   
    printf("\nPrograma encerrado!\n");
 }
  
  
// retornara pra o main a escolha do filme de animação.

return escsus;
  }
    
