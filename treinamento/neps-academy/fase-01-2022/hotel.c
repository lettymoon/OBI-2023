#include <stdio.h>

int main(void){

    int d, a, n;

    // salvar as variáveis d, a e n
    scanf("%d", &d); // d = valor da diária
    scanf("%d", &a); // a = aumento a partir do dia 1 até dia 15
    scanf("%d", &n); // n = dia que o cliente chegou no hotel


    // agora vou salvar o valor da promo dependendo doa dia que o cliente chegou no hotel
    int promo = 0;

    if(n == 1)
        promo = d;
    else if(n > 1 && n <= 15)
        promo = d + ((n-1) * a);
    else
        promo = d + (14 * a);

    // agora vou multiplicar os dias que o cliente vai ficar hospedado no hotel pela promo dele

    int valorFinal = ((31-n)+1) * promo;
    printf("%d\n", valorFinal);


    return 0;
}