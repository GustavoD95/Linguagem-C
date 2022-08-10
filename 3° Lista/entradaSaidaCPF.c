//Entrada e saída CPF
#include <stdio.h>
#include <string.h>

//Objetivo: Leia os dados de um CPF no formato XXX.YYY.ZZZ-DD; Imprima os quatro números, sendo um valor por linha.

//Entrada: A entrada consiste vários arquivos de teste. Em cada arquivo de teste tem uma linha. A linha tem o seguinte formato XXX.YYY.ZZZ-DD, onde XXX, YYY, ZZZ, DD são números inteiros.

//Saida: Para cada arquivo da entrada, terá um arquivo de saída. O arquivo de saída tem quatro linhas com um número inteiro em cada uma delas, conforme foi entrado.

#define TamCPF 14

int main() {
    //Declarações
    char cpf[TamCPF];

    //Instruções

    //printf("DIGITE O CPF: ");
    scanf("%s", cpf);

    printf("%c%c%c\n", cpf[0], cpf[1], cpf[2]);
    printf("%c%c%c\n", cpf[4], cpf[5], cpf[6]);
    printf("%c%c%c\n", cpf[8], cpf[9], cpf[10]);
    printf("%c%c\n", cpf[12], cpf[13]);
 
    return 0;
}