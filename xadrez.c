#include <stdio.h>



int main() {
    // Movendo a torre 5 casas para direita
    for(int i = 1; i <= 5; i++){// o programa vai executar o código 1 até 5 até a condição ser falsa e parar o loop
        printf("Direita\n");
    }
    // Movendo o bispo 5 casas para cima, direita
    int b = 1;
    while (b <= 5){// o loop continua até que a condição seja falsa e o loop termina
        printf("Cima, Direita\n");// vai imprimir 5 vezes
        b++;
    }
    // movendo a rainha 8 casas a esquerda
    int r = 1;
    do{
        printf("Esquerda\n");// imprime pela 1 vez
        r++;// imcrementa

    }while ( r <= 8);// verifica a condição se for verdadeira continua o loop, se for falsa o loop termina

    return 0;
}
