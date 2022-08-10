//Funções
#include <stdio.h>
#include <math.h>

//Objetivo: Rafael, Beto e Carlos aprenderam algumas novas funções matemáticas. Cada um deles se identificou com uma função em especial,
// e resolveram competir para ver quem tinha a função de maior resultado. Dados os valores x e y, diga quem escolheu a função com o maior resultado.

//Entrada: A primeira linha de entrada contém um inteiro N que determina a quantidade de casos de teste. Cada caso de teste consiste em dois inteiros
// x e y (1 ≤ x, y ≤ 100), indicando as variáveis a serem inseridas na função.

//Saída: Para cada caso de teste imprima uma linha, contendo uma frase, indicando quem ganhou a competição. Por exemplo, se Rafael ganhar a competição,
// imprima “Rafael ganhou”. Assuma que nunca haverá empates.

//Função para fazer os cálculos com a função do Rafael
int resultR(X,Y){
    int R;

    R = pow((3*X),2) + pow(Y,2);

    return R;
}

//Função para fazer os cálculos com a função do Beto
int resultB(X, Y){
    int B;

    B = 2 * pow(X,2) + pow((5*Y),2);

    return B;
}

//Função para fazer os cálculos com a função do Carlos
int resultC(X,Y){
    int C;

    C = -100*X + pow(Y,3);

    return C;
}
 
int main() {
    //Declarações
    int N, i, X, Y, R, B, C;

    //Instruções
    //Printf("DIGITE A QUANTIDADE DE TESTES: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++){

      //Printf("DIGITE OS VALORES DE X E Y: ");
      scanf("%d %d", &X, &Y);

      //Chamada das Funções
      R = resultR(X,Y);
      C = resultC(X,Y);
      B = resultB(X,Y);

      if(R > B && R > C){ //Verifica se o resultado da função do Rafael é maior que a função dos demais.

      printf("Rafael ganhou\n");

      } else if(B > R && B > C){ //Verifica se o resultado da função do Beto é maior que a função dos demais.

        printf("Beto ganhou\n");

      } else { //Caso nenhuma das outras funções tenha um resultado maior entre elas, a do Carlos fica sendo a maior.
        printf("Carlos ganhou\n");
      }

    }
    return 0;
}