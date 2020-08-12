//
// Created by arch on 8/12/20.
//

#include <stdio.h>

int main() {

    float v1, v2, v3;

    printf("Por favor, insira um valor em R$: ");
    scanf("%f", &v1);
    printf("Por favor, insira a cotação do Dolar (Dolar->Reais): ");
    scanf("%f", &v2);
    printf("Por favor, insira a cotação do Euro (Euro->Reais): ");
    scanf("%f", &v3);

    printf("Você tem $%f dólares.\n", v1/v2);
    printf("Você tem $%f euros.\n", v1/v3);


}