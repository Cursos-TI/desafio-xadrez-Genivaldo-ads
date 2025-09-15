#include <stdio.h>

    int main() {
        printf("Torre\n");  //Movimento da Torre
            for (int i = 0; i < 5; i ++) {     //Move a torre 5 casa para a direita
                printf("Direita\n");           //imprime a direção do movimento
            }
        printf("\n"); //pula uma linha para separar o movimento das peças

        printf("Bispo\n"); //Movimento da Rainha
            int i = 1; //contador
                while (i <= 5) {    //Move o Bispo 5 casas na diagonal superior
                    printf("Cima Direita\n");   //Imprime a direção do movimento
                    i++;   //Incremento para não criar loop infinito
                }
        printf("\n"); // Pula uma linha para separar o movimento das peças

        printf("Rainha\n"); //Movimento da Rainha
                    int j = 1; 
                        do {
                        printf("Esquerda\n"); //imprime a direção do movimento
                            j++;
                        } while (j <= 8); // Move 8 casas para a esquerda

                    printf("\n"); //Pula uma linha

                    printf("\nFim dos Movimentos\n");  //Fim dos movimentos

    return 0;
}
