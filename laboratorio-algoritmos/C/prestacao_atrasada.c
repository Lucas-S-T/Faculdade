//
// Created by arch on 8/12/20.
//

#include <stdio.h>

int main() {

    float v1, v2, v3;

    printf("Por favor, insira o valor da prestação em R$: ");
    scanf("%f", &v1);
    printf("Por favor, insira a taxa por dias atrasados: ");
    scanf("%f", &v2);
    printf("Por favor, insira a quantidade de dias atrasados: ");
    scanf("%f", &v3);

    printf("O valor final será: R$%f",v1+v1*(v2/100)*v3);


}