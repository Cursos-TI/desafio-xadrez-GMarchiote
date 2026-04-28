#include <stdio.h>

int main()
{
    // Mover a peça torre 5 casas para a direita
    int torre = 1, bispo = 1;
    while (torre <= 5)
    {
        printf("Torre: direita\n");
        torre++;
    }
    printf("---- // ----\n");
    do // Mover a peça bispo 5 casas na diagonal para cima e à direita
    {
        printf("Bispo: cima\n");
        printf("Bispo: direita\n");
        bispo++;
    } while (bispo <= 5);
    printf("---- // ----\n");

    for (int rainha = 1; rainha <= 8; rainha++) // Mover a peça rainha oito casas para a esquerda
    {
        printf("Rainha: esquerda\n"); 
    }
    
    return 0;
}
