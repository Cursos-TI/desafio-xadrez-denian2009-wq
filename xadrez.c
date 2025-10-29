#include <stdio.h>

/* ==============================
   Funções recursivas
   ============================== */

// Função recursiva para movimentar a TORRE para a direita
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return; // Caso base da recursão
    printf("Direita\n");
    moverTorre(casasRestantes - 1); // Chamada recursiva
}

// Função recursiva com loops aninhados para o BISPO
// O Bispo se move na diagonal: para cada casa vertical, há também movimento horizontal.
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return; // Caso base
    // Loop aninhado: externo vertical, interno horizontal
    for (int i = 1; i <= 1; i++) { // Cada passo vertical
        for (int j = 1; j <= horizontal; j++) {
            printf("Cima, Direita\n");
        }
    }
    moverBispo(vertical - 1, horizontal); // Chamada recursiva
}

// Função recursiva para a RAINHA — movimenta para a esquerda
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

/* ==============================
   Movimento complexo do CAVALO
   ============================== */
// Cavalo se move em "L": duas casas para cima e uma para a direita.
// Aqui usamos loops aninhados e controle de fluxo (break e continue)
void moverCavalo() {
    int casasCima = 2;
    int casasDireita = 1;

    printf("Movimento do CAVALO:\n");

    for (int i = 1; i <= casasCima; i++) { // movimento vertical
        printf("Cima (%d)\n", i);

        // loop interno: move para a direita somente na última subida
        for (int j = 1; j <= casasDireita; j++) {
            if (i < casasCima) {
                continue; // ainda subindo, não move horizontalmente
            }

            // chegou no topo do movimento em "L"
            printf("Direita (%d)\n", j);

            // interrompe o loop após o movimento horizontal
            break;
        }
    }
}

/* ==============================
   Função principal
   ============================== */
int main() {

    // Movimento da TORRE (recursivo)
    printf("Movimento da TORRE:\n");
    int casasTorre = 5;
    moverTorre(casasTorre);

    printf("\n");

    // Movimento do BISPO (recursivo + loops aninhados)
    printf("Movimento do BISPO:\n");
    int casasVerticaisBispo = 4;
    int casasHorizontaisBispo = 1;
    moverBispo(casasVerticaisBispo, casasHorizontaisBispo);

    printf("\n");

    // Movimento da RAINHA (recursivo)
    printf("Movimento da RAINHA:\n");
    int casasRainha = 6;
    moverRainha(casasRainha);

    printf("\n");

    // Movimento do CAVALO (loops aninhados + controle de fluxo)
    moverCavalo();

    return 0;
}