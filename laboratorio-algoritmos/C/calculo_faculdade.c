//
// Created by arch on 8/12/20.
//

#include <stdio.h>

int main() {

    float v1, v2, v3;


    printf("Por favor, insira a mensalidade da faculdade em R$: ");
    scanf("%f", &v1);
    printf("Por favor, insira os gastos diários com transporte em R$: ");
    scanf("%f", &v2);
    printf("Por favor, insira os gastos diários com alimentação em R$: ");
    scanf("%f", &v3);

    v1 = v1+(v2*30)+(v3*30);

    printf("Gastos mensais: R$%f\n", v1);
    printf("Gastos anuais: R$%f", v1*12);





}