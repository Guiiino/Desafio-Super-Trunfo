#include <stdio.h>

int main() {

    printf("Nesse jogo iremos demonstrar com estrutras de repetição movimentos de peça de xadrez\n\n");

    //Iremos ilustrar o movimento da torre 

    for(int i = 0; i < 5; i++){
        printf("Torre andou 1 casa para direita\n");
    }

        printf("\nTorre andou 5 casas para direita!\n\n");

        //Agora o movimento do bispo

    int i = 0; // variavel de incremento

    while(i < 5){
        printf("Bispo andou 1 Casa para cima, 1 casa para direita\n");
        i++;
    }

    printf("\nBispo andou 5 casas na diagonal para a direita!\n\n");

        //Segue abaixo o movimento da rainha

    do { 
        printf("A rainha moveu 1 casa para esqueda\n");
        i++;
    } while (i < 13);

    printf("\nA rainha moveu 8 casas para esqueda!");
}