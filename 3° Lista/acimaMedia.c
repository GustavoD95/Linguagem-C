// Acima da Média
#include <stdio.h>

// Objetivo: Sabe-se que 90% dos calouros tem sempre a expectativa de serem acima da média no início de suas graduações.
// Você deve checar a realidade para ver se isso procede.

// Entrada: A entrada contém muitos casos de teste. A primeira linha da entrada contém um inteiro C, indicando o número de 
//casos de teste. Seguem C casos de teste ou instâncias. Cada caso de teste inicia com um inteiro N, que é o número de pessoas
// de uma turma (1 ≤ N ≤ 1000). Seguem N inteiros, separados por espaços, cada um indicando a média final (um inteiro entre 0 e 100)
// de cada um dos estudantes desta turma.

// Saída: Para cada caso de teste imprima uma linha dando o percentual de estudantes que estão acima da média da turma, com o valor
// arredondado e com 3 casas decimais.

int main(){
    // Declaração
    int C, N, i;
    float soma, total;

    // Instruções
    //printf("DIGITE A QUANTIDADE DE CASOS: ");
    scanf("%d", &C);

    while(C > 0){
        //printf("DIGITE A QUANTIDADE DE ALUNOS: ");
        scanf("%d", &N);

        int alunos[N];
        soma = 0;
        total = 0;

        for(i = 0; i < N; i++){
            scanf("%d", &alunos[i]);
            soma = soma + alunos[i];

        }
        soma = soma / N;

        for(i = 0; i < N; i++){
            if(alunos[i] > soma){
                total++;
            }
        }
        printf("%.3f%c\n", total / N * 100.00, '%');
        C--;
    }
    return 0;
}