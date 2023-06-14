#include <stdio.h>

int main() {
    int maior = 0, menor = 0, n, quantNum = 0; 
    float total = 0;

    while (1) {
        printf("Digite um numero: ", &n);
        scanf("%d", &n);
        if(n < 0) 
            break;

        if(quantNum == 0)
            maior = n, menor = n;
        if(n < menor)
            menor = n;
        if(n > maior)
            maior = n;

        quantNum++;
        total += n;
    }
    printf("Media: %.1f\n", total / quantNum);
    printf("Maior: %d Menor: %d\n", maior, menor);

    return 0;
}
