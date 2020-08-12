//
// Created by arch on 8/12/20.
//
#include <stdio.h>
#include <stdlib.h>


void check(int i){

    if(i > 10 || i <0){
        printf("Valor inválido!");
        exit(1);
    }

}

int main() {

    int v1, v2, v3;

    printf("Por favor, insira sua primeira nota: ");
    scanf("%i", &v1);
    check(v1);
    printf("Por favor, insira sua segunda nota: ");
    scanf("%i", &v2);
    check(v2);
    printf("Por favor, insira sua terceira nota: ");
    scanf("%i", &v3);
    check(v3);

    printf("Sua média é: %f", (v1+v2+v3)/3.0);

}
