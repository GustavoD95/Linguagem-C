//Distância entre dois pontos
#include <stdio.h>
 
//Objetivo: Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2)
// e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

//Entrada: Contém duas linhas de dados. A primeira liha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém 
//dois valores de ponto flutuante x2 y2.

//Saída: Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.

int main() {
 
    // declarações
    float x1, x2, y1, y2;
    float distancia;
    
    //instruções
    //printf("Quais as coordenadas do ponto 1 ? ");
    scanf("%f %f", &x1, &y1); 
    
    //printf("Quais as coordenadas do ponto 2 ? ");
    scanf("%f %f", &x2, &y2); 
  
    //Cálculo da distância entre dois pontos
    
    distancia = sqrt( pow (x2 - x1, 2) + pow (y2 - y1, 2));
    
    //Mostrar na saída
    printf("%.4f\n", distancia);
 
    return 0;
}