//
// Created by arch on 8/12/20.
//

#include <stdio.h>

int main() {

    float v1;

    printf("Por favor, insira a temperatura em graus Celcius: ");
    scanf("%f", &v1);

    v1 = (v1 * 9/5) + 32;

    printf("Temperatura em Fahrenheit: %f\n", v1);


}