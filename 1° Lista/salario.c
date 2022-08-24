//Salário
#include <stdio.h>
 
 //Objetivo: Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, 
 //o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, 
 //com duas casas decimais.

 //Entrada: O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número,
 // quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.

 //Saída: Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes
 // e depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $.

int main() {
 
  int funcionario;
  int horas;
  float valor_hora, valor_salario;
     
  printf("Qual a matricula do funcionário?\n ");
  scanf("%d", &funcionario);
  printf("Quantas horas trabalhadas?\n ");
  scanf("%d", &horas);
  printf("Quanto recebe em horas?\n ");
  scanf("%f", &valor_hora);
  
  //Cálculo das horas trabalhadas * valor hora = valor salário
  valor_salario = horas * valor_hora;

  //Mostrar na tela 
  printf("NUMBER = %d\n", funcionario);
  printf("SALARY = U$ %.2f\n", valor_salario);
 
  return 0;
}