#include <stdio.h>

//função responsável por mostrar sugestoes de filmes de comedia.

char animacao(char tus[],char tsen[]){

// declaração de variável de retorno.
// esc = escolha do filme de animação.
  
int esc;

//mostrar mensagem informando as sugestões
  printf("\nSugestões:");
    printf("\n 1 - UP - Altas Aventuras\n 2 - Shrek\n 3 - Zootopia: essa cidade é o bicho\n");

//mostrar mensagem pedindo para que seja escolhido a opção de filme.
  
      printf("\n Escolha uma sugestão para ter mais informações:\n");
  
//arquivamento de valor atribuido a variavel.
  
      scanf("%i", &esc);

   // se não for digitado nenhuma das sugestões acima.
  
  while(esc!= 1 && esc != 2 && esc !=3){

    //mostrará uma mensagem informando que a opção é inválida e solicitando a seleção de uma nova susgestão.
    
  printf("\n opção inválida!");
  printf("\n\nEscolha uma nova susgestão:\n");

    // armazenamento do novo valor digitado
  scanf("%i", &esc);}

//função que possibilitará a escolha de uma das opções sugeridas.

  switch(esc){

// condição para que a primeira opção seja selecionada.
// a primeira opção so odera ser selecionada se o numero 1 for digitado.
    
  case 1:
//quando a condicao for verdadeira.
//mostrará uma mensagem com sinópse do filme selecionado e onde assisti-lo.
    
      printf("\nUP - Altas aventuras\n\nSinópse:\n\nCarl Fredricksen (Edward Asner) é um vendedor de balões que, aos 78 anos, está prestes a perder a casa em que sempre viveu com sua esposa, a falecida Ellie. O terreno onde a casa fica localizada interessa a um empresário, que deseja construir no local um edifício. Após um incidente em que acerta um homem com sua bengala, Carl é considerado uma ameaça pública e forçado a ser internado em um asilo. Para evitar que isto aconteça, ele enche milhares de balões em sua casa, fazendo com que ela levante vôo. O objetivo de Carl é viajar para uma floresta na América do Sul, um local onde ele e Ellie sempre desejaram morar. Só que, após o início da aventura, ele descobre que seu pior pesadelo embarcou junto: Russell (Jordan Nagai), um menino de 8 anos.\n\nOnde assistir:\nDisney +");
break;
    
  case 2:

// condição para que a segunda opção seja selecionada.
// a segunda opção so odera ser selecionada se o numero 2 for digitado.
//mostrará uma mensagem com sinópse do filme selecionado e onde assisti-lo.
    
    printf("\nShrek\n\nSinópse:\n\nUm pântano distante vive Shrek (Mike Myers), um ogro solitário que vê, sem mais nem menos, sua vida ser invadida por uma série de personagens de contos de fada, como três ratos cegos, um grande e malvado lobo e ainda três porcos que não têm um lugar onde morar. Todos eles foram expulsos de seus lares pelo maligno Lorde Farquaad (John Lithgow). Determinado a recuperar a tranquilidade de antes, Shrek resolve encontrar Farquaad e com ele faz um acordo: todos os personagens poderão retornar aos seus lares se ele e seu amigo Burro (Eddie Murphy) resgatarem uma bela princesa (Cameron Diaz), que é prisioneira de um dragão. Porém, quando Shrek e o Burro enfim conseguem resgatar a princesa logo eles descobrem que seus problemas estão apenas começando.\n\nOnde assistir:\nNetflix\nPrime Video\nParamount");
break;
  
    case 3:

// condição para que a terceira opção seja selecionada.
// a terceira opção so odera ser selecionada se o numero 3 for digitado.
//mostrará uma mensagem com sinópse do filme selecionado e onde assisti-lo.
      
    printf("\n\nZootopia: essa cidade é o bicho\n\nSinopse:\nEm Zootopia: Essa Cidade é o Bicho, acompanhamos a história de Judy Hopps, uma pequena fazendeira que é filha de agricultores. Insatisfeita com a vida no interior, ela tem sonhos maiores: se mudar para a cidade grande, Zootopia, e se tornar a primeira coelha policial. Quando Judy consegue alcançar o seu objetivo, ela é designada para a sua primeira e grande missão, que é encontrar um animal perdido. Contando com a ajuda inesperada de Nick, uma raposa conhecida por sua malícia e infrações, ela descobre que existe uma conspiração que afetará toda a cidade.\n\nOnde assistir:\nDisney +");
break;

// quando for digitado qualquer outro numero que n seja os anteriores, o programa será encerrado.
    
 default:

//mostrará mensagem informando que o programa foi encerrado.
   
    printf("\nPrograma encerrado!\n");
 break;
    }
  
// retornara pra o main a escolha do filme de animação.
  
return esc;}