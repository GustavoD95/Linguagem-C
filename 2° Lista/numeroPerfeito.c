//Número Perfeito
#include <stdio.h>
 
 //Objetivo: Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios
 // (excluindo ele mesmo) é igual ao próprio número. Por exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6. Sua tarefa é escrever
 // um programa que imprima se um determinado número é perfeito ou não.

 //Entrada: A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 20), indicando o número
 // de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor inteiro X (1 ≤ X ≤ 108), que pode ser ou não, um número perfeito.

 //Saída: Para cada caso de teste de entrada, imprima a mensagem “X eh perfeito” ou “X nao eh perfeito”, de acordo com a especificação fornecida.

int retorna_perfeito (int nverificar){
    //Instrução
    printf("%d eh perfeito\n", nverificar);

    return 0;
}

int retorna_imperfeito(nverificar){
    //Instrução
    printf("%d nao eh perfeito\n", nverificar);

    return 0;
}

int main() {
    //Declarações
    int nteste, i, nverificar, a, b, i1;

    //Instruções

    //printf("DIGITE A QUANTIDADE DE TESTES: \n");
    scanf("%d", &nteste);

    for(i = 1; i <= nteste; i++){
        //printf("DIGITE UM NÚMERO INTEIRO QUE SERÁ VERIFICADO: \n");
        scanf("%d", &nverificar);

        a = nverificar/2;
        b = 0;

        for(i1 = 1; i1 <= a; i1++ ){

            if(nverificar % i1 == 0)
                b += i1;
        }   
        if(b == nverificar){
          retorna_perfeito (nverificar);

        } else {
            retorna_imperfeito (nverificar);
        }
    }

    return 0;
}