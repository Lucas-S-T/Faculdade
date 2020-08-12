//
// Created by arch on 8/12/20.
//

#include <stdio.h>

int main() {

    float v1, v2, v3, v4, v5, v6, v7;

    printf("Por favor, insira sua nota nas atividades da NP1: ");
    scanf("%f", &v1);

    printf("Por favor, insira sua nota nas atividades EAD da NP1: ");
    scanf("%f", &v2);

    printf("Por favor, insira sua nota da avaliação NP1: ");
    scanf("%f", &v3);

    printf("Por favor, insira sua nota nas atividades da NP2: ");
    scanf("%f", &v4);

    printf("Por favor, insira sua nota nas atividades EAD da NP2: ");
    scanf("%f", &v5);

    printf("Por favor, insira sua nota da avaliação pluri: ");
    scanf("%f", &v6);

    printf("Por favor, insira sua nota nas atividades EAD da NP2: ");
    scanf("%f", &v7);

    v1 = v1*0.2+v2*0.2+v3*0.6;
    v2 = v4*0.2+v5*0.2+v6*0.2+v7*0.4;
    v3 = v1*0.4+v2*0.6;

    printf("Sua nota da NP1 é: %f\n", v1);
    printf("Sua nota da NP2 é: %f\n", v2);
    printf("Sua nota final é: %f\n", v3);


}