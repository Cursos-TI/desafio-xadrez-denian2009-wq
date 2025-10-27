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

    return 0;
}