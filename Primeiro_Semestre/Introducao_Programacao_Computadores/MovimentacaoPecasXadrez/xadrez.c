#include <stdio.h>

int main(){

    int torre, bispo, rainha;

    // Movimentação da Torre (for)
    printf("Movimentação da Torre:\n");
    for(torre = 1; torre <= 5; torre++){
        printf("Torre move-se horizontalmente para a direita\n");
    }

    printf("---------------------------------------------------");

     // Movimentação do Bispo (while)
    printf("\nMovimentação do Bispo:\n");
    bispo = 1;

    while(bispo <= 5){
        printf("Bispo move-se para cima direita\n");
         bispo ++;
    }

    printf("---------------------------------------------------");

    // Movimentação da Rainha (do-while)
    rainha = 1;
    printf("\nMovimentação da Rainha:\n");

    do {
        printf("Rainha move-se para a esquerda:\n");
        rainha++;
    } while (rainha <= 8);
    
    
    return 0;
}