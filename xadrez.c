#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0){ // aqui é a quantidade de vezes que o código vai rodar
        printf("Direita \n");
        moverTorre(casas - 1); // aqui vai decrementar o valor de casas em 1
    }
}

void moverBispo(int casas){
    if (casas > 0){ // aqui vai ser a quantidade de vezes que o código vai rodar
        for(int i = 1; i <= 1 ; i++){ // aqui o i é 1 e vai rodar 1 vez
            for(int j = 0; j < i; j++){ // aqui o j é 0 e também vai rodar 1 vez
                printf("Direita \n");
            }
            printf("Cima \n");
        }
        moverBispo(casas - 1); // quando a condição do for externo for falsa executa a recursiva
    }
}

void moverRainha(int casas){
    if(casas > 0){
        printf("Esquerda \n");
        moverRainha(casas - 1);
    }
}

int main() {
    // movimento da torre
    moverTorre(5);
    // Movendo o bispo 5 casas para cima, direita
    moverBispo(5);
    // movendo a rainha 8 casas a esquerda
    moverRainha(8);

    // Movimento do Cavalo
    int movimento = 1;
    
    while (movimento--){ // aqui vai executar 1 vez, depois faz o decremento aonde o movimento se torna 0 ai a condição é falsa e termina a execução

        for (int i = 1, j = 2; i <= j; i++){ // aqui temos multiplas variaveis aonde a condição va ser verdadeira duas vezes
            printf("Cima \n"); // executa o printf duas vezes
        }
        printf("Direita \n");// executa 1 vez
    }

    return 0;
}
