//Entrada e Saída de Datas
#include <stdio.h>
#include <string.h>

#define TamData 8

//Objetivo: Leia uma data no formato DD/MM/AA; Imprima a data no formato MM/DD/AA; Imprima a data no formato AA/MM/DD; Imprima a data no formato DD-MM-AA.

//Entrada: A entrada consiste vários arquivos de teste. Em cada arquivo de teste tem uma linha. A linha tem o seguinte formato DD/MM/AA onde DD, MM, AA são números inteiros. Conforme mostrado no exemplo de entrada a seguir.

//Saída: Para cada arquivo da entrada, terá um arquivo de saída. O arquivo de saída tem três linhas conforme os procedimentos 2, 3 e 4. Conforme mostra o exemplo de saída a seguir.
 
int main() {
    //Declarações
    char data[TamData];

    //Instruções

    //printf("DIGITE A DATA: ");
    scanf("%s", data);

    printf("%c%c/%c%c/%c%c\n", data[3], data[4], data[0], data[1], data[6], data[7]); //troca a posição para MM//DD/AA 
    printf("%c%c/%c%c/%c%c\n", data[6], data[7], data[3], data[4], data[0], data[1]); //troca a posição para AA/MM/DD
    printf("%c%c-%c%c-%c%c\n", data[0], data[1], data[3], data[4], data[6], data[7]); //troca / por -
 
    return 0;
}