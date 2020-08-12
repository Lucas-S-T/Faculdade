//
// Created by arch on 8/12/20.
//

#include <stdio.h>

int main() {

    float v1, v2;

    printf("Por favor, insira a quantidade de aulas semanais: ");
    scanf("%f", &v1);

    v1 = v1*25*4;
    v1 = v1+(v1*0.1);

    v2 = v1*0.12;

    printf("Valor bruto mensal: R$%f\n", v1);
    printf("Valor descontado em folha de pagamento (12%% IR+INSS) : R$%f\n", v2);
    printf("Valor líquido mensal: R$%f\n", v1-v2);


}