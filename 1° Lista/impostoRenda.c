//Imposto de renda
#include <stdio.h>

//Objetivo: Leia um valor com duas casas decimais, equivalente ao salário de uma pessoa de Lisarb. 
//Em seguida, calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda.

//Entrada: A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

//Saída: Imprima o texto "R$" seguido de um espaço e do valor total devido de Imposto de Renda, 
//com duas casas após o ponto. Se o valor de entrada for menor ou igual a 2000, deverá ser impressa a mensagem "Isento".

int main()
{
    //Declarações 
    float salario, porcent1, porcent2, porcent3;
    
    //Instruções
    
    printf("DIGITE O VALOR DO SALÁRIO PARA CALCULAR O IMPOSTO DE RENDA: ");
    //leitura de dados.
    scanf("%f", &salario); //Ler o valor do salário.
    
    //verificar se entra em alguma dessas condições e realiza os cálculos dos impostos de renda.
    if( salario <= 2000) {
        printf("Isento\n");
    } 
    else if (salario > 2000 && salario <= 3000){
        porcent1 = (salario - 2000) * 8 / 100;
        printf("R$ %.2f\n", porcent1);
    }
    else if (salario > 3000 && salario <= 4500){
        porcent2 = (salario - 3000) * 18 / 100 + 80;
        //1000 * 8% = 80
        printf("R$ %.2f\n", porcent2);
    }
    else if (salario > 4500){
        porcent3 = (salario - 4500) * 28 / 100 + 350;
        // 1000 * 8% = 80
        //4500 - 3000 = 1500 * 18% = 270
        // 80 + 270 = 350
        printf("R$ %.2f\n", porcent3);
    }

    return 0;
}