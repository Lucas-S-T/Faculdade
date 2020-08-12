//
// Created by arch on 8/12/20.
//

#include <stdio.h>
#include <math.h>

int main() {

    float v1, v2;

    printf("Por favor, insira o raio da lata: ");
    scanf("%f", &v1);
    printf("Por favor, insira a altura da lata (Utilize a mesma unidade de medida): ");
    scanf("%f", &v2);

    v1 = M_PI*v1*v1*v2;

    printf("A área é: %f", v1);



}