//
// Created by arch on 8/12/20.
//

#include <stdio.h>
#include <math.h>

int main() {

    float v1;

    printf("Por favor, insira o raio da circunferência: ");
    scanf("%f", &v1);

    v1 = M_PI*v1*v1;

    printf("A área é: %f", v1);



}