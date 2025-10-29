#include <stdio.h>

int main() {

    // Movimento da TORRE (for)
    // A Torre se move 5 casas para a direita.
    int casasTorre = 5;

    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n"); 

    // Movimento do BISPO (while)
    // O Bispo se move 5 casas na diagonal superior direita.
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do BISPO:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n");

    // Movimento da RAINHA (do-while)
    // A Rainha se move 8 casas para a esquerda.
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    // Movimento do CAVALO (for + while aninhado)
    // O Cavalo se move em "L": duas casas para baixo e uma para a esquerda.
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do CAVALO:\n");

    // Loop externo: move o Cavalo duas casas para baixo.
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo (%d)\n", i);

        // Loop interno: após descer, move uma casa para a esquerda.
        int j = 1;
        while (j <= casasEsquerda && i == casasBaixo) {  
            // o Cavalo só move para a esquerda depois de descer as 2 casas
            printf("Esquerda (%d)\n", j);
            j++;
        }
    }

    return 0;
}