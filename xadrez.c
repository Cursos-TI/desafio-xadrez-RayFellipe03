#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // ** Nível Novato
    int TorreNovato, BispoNovato, RainhaNovato;

    //apresentacao do programa
    printf("Ola jogador, seja bem vindo ao modo treino!\n");
    printf("Aqui voce ira aprender a movimentar as pecas de Xadrez pelo tabuleiro!\n");
    printf("\nO tabuleiro de xadrez e composto por 64 casas, divididas em 8 colunas verticais e 8 horizontais.\n");
    printf("As colunas verticais recebem letras e vao do (A) ao (H).\n");
    printf("Ja as horizontais recebem numeros, que vao de (1) a (8).\n");
    

    //inicio

    //conhecendo a torre
    printf("\nBom, vamos comecar pela Torre, ela se move em 4 direcoes: \n(cima); (baixo); (direita); (esquerda). \nPodendo escolher 1 por jogada e andar quantas casas quiser desde que nao tenha outra peca impedindo o seu caminho.\n");
    printf("Digamos que a torre esteja na casa (A1), canto inferior do tabuleiro, e queira  andar (5) casas para a direita.\n");
    printf("vamos tentar?\n \n");

    //movimentaçao da torre
    TorreNovato = 1;
    do{
        
        printf("-> direita\n");
        TorreNovato ++;

    } while (TorreNovato <=5);

    printf("\nFizemos os 5 movimentos e saimos da casa (A1) para a (F1).\n");

    printf("\n***********************************************\n");

    //conhecendo o bispo

    printf("\nAgora que aprendemos a mover a torre, vamos para o Bispo!\n");
    printf("Diferente da torre o bispo anda na diagonal.\n");
    printf("Seus movimentos podem ser descritos da seguinte maneira: \n(cima + esqueda); (cima + direita); (baixo + esqueda); (baixo + direita)\nAssim como a torre, o bispo so pode andar caso não tenha outra peca impedindo seu movimento.\n");

    printf("Digamos que o bispo esteja na casa (A1), canto inferior do tabuleiro, e queira  andar (5) casas para a diagonal superior direita.\n");
    printf("vamos tentar?\n \n");

    //movimentaçao do bispo
    BispoNovato = 1;

    while (BispoNovato <=5) {
        
        printf("-> cima + direita\n");
        BispoNovato ++;

    };

    printf("\nFizemos os 5 movimentos e saimos da casa (A1) para a (F6).\n");

    printf("\n***********************************************\n");

    //conhecendo a rainha
    printf("Agora vamos utilizar a rainha, ela veio por ultimo pois pode efetuar os mesmos movimentos que a torre e o bispo,\nou seja, ela anda tanto na horizontal e vertical, quanto na diagonal desde que nenhuma peca esteja impedindo o seu caminho.\n");

    printf("Digamos que a rainha esteja na casa (H4), lado direito do tabuleiro, e queira  andar (7) casas para a esquerda.\n");//tabuleiro possui 8 casas, apos 7 movimentos voce chega no fim do tabuleiro
    printf("vamos tentar?\n \n");

    //movimentacao da rainha
    RainhaNovato=1;
    for (;RainhaNovato <= 7; RainhaNovato++)
    {
        printf("-> esquerda:\n");
    }

    printf("\nFizemos os 7 movimentos e saimos da casa (H4) para a (A4).\n");
    printf("Com isso terminamos o desafio de nivel iniciante! Aguardamos voce no Proximo nivel.\n");

    printf("\n***********************************************\n");
    printf("\n***********************************************\n");



    // ** Nível Aventureiro - Movimentação do Cavalo
    int CavalorReta = 1, CavaloCurva = 1;

    //conhecendo o cavalo
    printf("Para a nossa proxima missao, vamos conhecer o cavalo\n");
    printf("O cavalo se move em (L), ou seja, ele anda 2 casas em direcao vertical ou horizontal, e por fim, anda mais um casa para o lado\n");
    printf("Por exemplo: (cima) (cima) (direita)\n");

    printf("Digamos que o cavalo esteja na casa (F5), topo direito do tabuleiro, e queira  efetuar um movimento em L para a casa de baixo na esquerda.\n");
    printf("Vamos tentar?\n \n");

    //movimentacao do cavalo
    for (; CavaloCurva <= 1; CavaloCurva++) {  // Loop externo
        while (CavalorReta <= 2) {  // Loop interno
            printf("-> baixo \n");
            CavalorReta ++;
        }

        printf("-> esquerda\n");
    }

    printf("Fizemos o movimento, e saimos da casa (F5) para a casa (E3)");
    printf("Com isso terminamos o desafio de nivel aventureiro! Aguardamos voce no Proximo nivel.\n");

    printf("\n***********************************************\n");
    printf("\n***********************************************\n");




    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
