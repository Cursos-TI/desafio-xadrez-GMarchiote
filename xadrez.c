#include <stdio.h>

void torre(int t){ // controla a movimentação da torre
    if (t > 0)
    {
        printf("direita\n");
        torre (t - 1);
    }    
}

void bispo(int b){ // controla a movimentação do bispo
    if (b > 0) {
        int i, d;
        for (i = 1; i < 2; i++)
        {
            printf("cima\n");
            for (d = 1; d < 2; d++)
            {
                printf("direita\n");
            }
        }
        bispo(b - 1);
    } 
}

void rainha(int r){ // controla a movimentação da rainha
    if (r > 0)
    {
        printf("esquerda\n");
        rainha (r - 1);
    }  
}

void cavalo(int c){ // controla a movimentação do cavalo
    if (c > 0){
        for (int i = 1; i <= 2; i++) {
            printf("Cima\n");
                for (int j = 1; j <= 1 && i == 2; j++) {
                printf("Direita\n");
                }
            }
        cavalo(c - 1);
        }
}

int main ()
{
    int t = 5, b = 5, r = 8, c = 1;
    // Parte do código responsável por invocar as recursividades e imprimir as movimentações das devidas peças
    printf("Movimentação da torre: \n");
    torre(t);

    printf("\n");

    printf("Movimentação do bispo: \n");
    bispo(b);

    printf("\n");

    printf("Movimentação da rainha: \n");
    rainha (r);

    printf("\n");

    printf("Movimentação do cavalo: \n");
    cavalo(c);    
    
    return 0;
}
