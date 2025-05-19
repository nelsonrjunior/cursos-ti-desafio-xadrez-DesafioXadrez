#include <stdio.h>
{
    printf("DESAFIO XADREZ");
    //Declarando as variaveis para movimentação do Bispo e da Rainha
    int posicao_Bispo = 1;
    int posicao_Rainha = 1;

    //Movimentando a Torre
    for (int i=1; i <= 5; i++)
        {
        printf("TORRE - Direita\n"); //Movimentando a peça 5 casas à direita
        }

    //Movimentando o Bispo
    while (posicao_Bispo <= 5)
        {
        printf("BISPO - Cima e Direita\n"); //Movimentando a peça 5 casas à cima e à direita
        posicao_Bispo = posicao_Bispo + 1;
        }

    //Movimentando a Rainha
    do
        {
        printf("RAINHA - Esquerda\n"); //Movimentando a peça 8 casas à esquerda
        posicao_Rainha = posicao_Rainha + 1;
        }
        while (posicao_Rainha <= 8);
    return 0;
}
