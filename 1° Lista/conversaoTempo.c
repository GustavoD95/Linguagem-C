//Conversão de tempo
#include <stdio.h>

/*Conversão de tempo
Objetivo:
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada:
O arquivo de entrada contém um valor inteiro N.

Saída:
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.*/

int main()
{
    //Declarações
    int N, horas, minutos, segundos, resto;
    
    //instruções
    
    printf("Digite a quantidade de segundos: ");
    scanf("%d",&N);
    
    //Calculo para converter os segundos em horas, minutos e segundos
    horas = N / 3600;
    resto = N % 3600;
    minutos = resto / 60;
    segundos = resto % 60;
    
    printf("%d:%d:%d\n", horas, minutos, segundos);
    
    return 0;
}