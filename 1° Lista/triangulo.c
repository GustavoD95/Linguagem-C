 //Triangulo
 #include <stdio.h>
 
 //Objetivo: Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, 
 //calcule o perímetro do triângulo. Em caso negativo, calcule a área do trapézio que tem A e B como base e C
 // como altura.

 //Entrada: A entrada contém três valores reais.

 //Saída: O resultado deve ser apresentado com uma casa decimal.

int main() {
 
   // declarações
    float A, B, C;
    float perimetro, area;
    
    //instruções
    printf("Digite o valor do lado 1: ");
    scanf("%f", &A);
    printf("Digite o valor do lado 2: ");
    scanf("%f", &B);
    printf("Digite o valor do lado 3: ");
    scanf("%f", &C);
    
    //verificar se é ou não um tirângulo
    if(A < (B + C) && B < (A + C) && C < (A + B)) {
        perimetro = A + B + C;
        printf("Perimetro = %.1f\n", perimetro);
    } else { 
        area = ((A + B) * C) / 2;
        printf("Area = %.1f\n", area);
    }
 
    return 0;
}