// Rodízio Veicular
#include <stdio.h>
#include <string.h>

#define Tam_Max 101 //Armazenar o tamanho máximo da quantidade de testes e mais 1 para guardar '\0'
#define Placa_Valida 8
// Objetivo: Nas vias delimitadoras não é permitido o tráfego de caminhões e automóveis que estejam dentro da restrição.
// Há uma escala que determina em quais dias da semana quais veículos não podem circular. Essa escala é regida pelo último
// dígito da placa do veículo, sendo:Segunda-feira, digito final da placa 1 e 2
// Terça-feira, digito final da placa 3 e 4
// Quarta-feira, digito final da placa 5 e 6
// Quinta-feira, digito final da placa 7 e 8
// Sexta-feira, digito final da placa 9 e 0
// Os motoristas que são flagrados violando a restrição de circulação são autuados com multa e quatro pontos na carteira de habilitação.

// Entrada: A primeira linha de entrada representa a quantidade de testes N (0 <= N < 1000) que deverão ser considerados. As demais
// entradas são cadeia de caracteres com tamanho máximo S (1 <= S <= 100) que representam cada placa que deverá ser analisada, de tal
// forma que, cada placa fique em uma única linha de entrada. O formato esperado para uma placa veicular válida em São Paulo é "AAA-9999",
// tal que A é um caracter válido em [A-Z], e 9 um dígito numérico válido em [0-9].

// Saída: O conjunto de valores válidos como saída são: MONDAY, TUESDAY, WEDNESDAY, THURSDAY e FRIDAY, de acordo com a tabela de restrições
// predefinida, e FAILURE caso a placa não apresente o padrão definido.
 
int main() {
    //Declaração
    int testes, i;
    char placa[Tam_Max];

    //Instruções
    //printf("DIGITE A QUANTIDADE DE TESTES: ");
    scanf("%d", &testes);

    for(i = 0; i <= testes - 1; i++){
        //printf("DIGITE A PLACA DO CARRO: ");
        scanf("%s", placa);

        if(strlen(placa) != Placa_Valida || placa[0] < 65 || placa[0] > 90 ||
        placa[1] < 65 || placa[1] > 90 ||
        placa[2] < 65 || placa[2] > 90 ||
        placa[3] != 45 ||
        placa[4] < 48 || placa[4] > 57 ||
        placa[5] < 48 || placa[5] > 57 ||
        placa[6] < 48 || placa[6] > 57 ||
        placa[7] < 48 || placa[7] > 57){ // Verifica se o tamanho da placa está de acordo com 8 caracteres, se só tem letras maiúsculas e se os 4 últimos digitos são números.
            printf("FAILURE\n");         // Se for diferente dos critérios, ele imprime que é inválido.
        } else if(placa[7] == 49 || placa[7] == 50){ // Se o final da placa termina com 1 e 2 vai imprimir "MONDAY"
            printf("MONDAY\n");
        }else if(placa[7] == 51 || placa[7] == 52){ // Se o final da placa termina com 3 e 4 vai imprimir "TUESDAY"
            printf("TUESDAY\n");
        }else if(placa[7] == 53 || placa [7] == 54){// Se o final da placa termina com 5 e 6 vai imprimir "WEDNESDAY"
            printf("WEDNESDAY\n");
        }else if (placa[7] == 55 || placa [7] == 56){// Se o final da placa termina com 7 e 8 vai imprimir "THURSDAY"
            printf("THURSDAY\n");
        }else if(placa[7] == 57 || placa [7] == 48){// Se o final da placa termina com 9 e 0 vai imprimir "FRIDAY"
            printf("FRIDAY\n");
        }
    }

    return 0;
}