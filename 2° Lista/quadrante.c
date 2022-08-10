//Quadrante
#include <stdio.h>
 
 //Objetivo: Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence.
 // O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).

 //Entrada: A entrada contém vários casos de teste. Cada caso de teste contém 2 valores inteiros.
 
 //Saída: Para cada caso de teste mostre em qual quadrante do sistema cartesiano se encontra a coordenada lida, conforme o exemplo.

 int coordenas(int X, int Y){
    if(X == 0 || Y == 0){
        return 0;
    }

    while(X != 0 || Y != 0){

        if(X > 0 && Y > 0){

            printf("primeiro\n");

        }else if (X < 0 && Y > 0){

            printf("segundo\n");

        }else if(X < 0 && Y < 0){

            printf("terceiro\n");

        }else if(X > 0 && Y < 0){

            printf("quarto\n");
        }
        scanf("%d %d", &X, &Y);
        if(X == 0 || Y == 0){
            return 0;
        }

    }
}

int main() {
    //Declarações
    int X, Y;

    //Instruções
    //printf("DIGITE AS COORDENADAS: \n");
    scanf("%d %d", &X, &Y);

    //Chamada da função
    coordenas(X,Y);
 
    return 0;
}