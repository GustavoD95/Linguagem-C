//Experiências
#include <stdio.h>
 //Objetivo: Faça um algoritmo que mostra quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada,
 //utilizam três tipos de cobaias como sapos, ratos e coelhos. Sabe-se exatamente o número de experimentos que foram, o tipo de cobaia utilizada 
 //e a quantidade de cobaias utilizadas em cada experimentos.

 // Entrada
 //A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir.
 // Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas
 // e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

 //Saída
 //Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação
 //ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto.

void saida(float C, float R, float S){
    float soma, percentC, percentR, percentS;
    soma = C + R + S;
    percentC = C * 100 / soma;
    percentR = R * 100 / soma;
    percentS = S * 100 / soma;

    printf("Total: %.0f cobaias\n", soma);
    printf("Total de coelhos: %.0f\n", C);
    printf("Total de ratos: %.0f\n", R);
    printf("Total de sapos: %.0f\n", S);
    printf("Percentual de coelhos: %.2f %%\n", percentC);
    printf("Percentual de ratos: %.2f %%\n", percentR);
    printf("Percentual de sapos: %.2f %%\n",percentS);
}

int main() {
    //Declarações
    float C = 0, R = 0, S = 0, soma = 0;
    int N, i, qtdcob;
    char cobaia;
    float percentC, percentR, percentS;

    //Instruções
    //printf("DIGITE A QUANTIDADE DE COBAIAS: \n");
    scanf("%d", &N); 

    for(i = 1; i<=N; i++){
        //printf("DIGITE A QUANTIDADE E O TIPO DE COBAIA: \n");
        scanf("%d %c", &qtdcob, &cobaia);

        soma = soma + qtdcob;

        if(cobaia == 'C'){ //Se o caracter digitado for = C, soma C + quantidade de cobaias;

            C = C + qtdcob;

        } else if(cobaia == 'R'){ //Se o caracter digitado for = R, soma R + quantidade de cobaias;

            R = R + qtdcob;

        }else if(cobaia == 'S'){ //Se o caracter digitado for = S, soma S + quantidade de cobaias;

            S = S + qtdcob;

        }
    }
    
    //Chamada do procedimento 
    saida(C, R, S);

    return 0;
}