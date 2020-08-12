//
// Created by arch on 8/12/20.
//

#include <stdio.h>
#include <stdlib.h>

int main() {

    int v1, v2;

    printf("Por favor, insira o ano atual: ");
    scanf("%i", &v1);
    printf("Por favor, insira o ano em que você nasceu: ");
    scanf("%i", &v2);

    if(v2>v1){
        printf("Data inválida");
        exit(0);
    }


    printf("você viveu aproximadamente %i dias.", (v1-v2)*365);

}