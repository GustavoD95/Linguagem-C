//Sequência lógica
#include <stdio.h>

//Objetivo: Escreva um programa que leia um valor inteiro N. N * 2 linhas de saída serão apresentadas na execução do programa,
//seguindo a lógica do exemplo abaixo. Para valores com mais de 6 dígitos, todos os dígitos devem ser apresentados.

//Entrada: O arquivo de entrada contém um número inteiro positivo N (1 < N < 1000).

//Saída: Imprima a saída conforme o exemplo fornecido.


int main() {

    //Protótipo
    void saida();
    
    //Procedimento que irá aparecer a saída
    saida();
    
    return 0;
}

 void saida(){
     
     //Declarações
     
     int N,a,b,c,d,e;
     
     //Instruções
     
     //Leitura de dados
     //printf("Digite um número inteiro: ");
     scanf("%d", &N);
     
     if (N >= 1 && N <= 1000){
     for(a = 1; a <= N; a++){ // Irá repetir até o valor do número digitado
     
        //Repetição e cálculo
        b = a * a;  
        c = a * a * a;
        printf("%d %d %d\n",a,b,c);
        
        d = b + 1;
        e = c + 1;
        printf("%d %d %d\n",a,d,e);
    }
    }    else{    
        printf("VALOR INVÁLIDO\n");
    }
 }