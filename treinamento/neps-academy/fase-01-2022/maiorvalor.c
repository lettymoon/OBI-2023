#include <stdio.h>

int somaDigitos(int i){
    
    int a = 0;
    int soma = 0;
    
    while(i > 0){
        soma += (i%10);
        i /= 10;
    }
    
    return soma;
    
}

int main(void){

    int n, m, s;

    scanf("%d", &n); // menor valor
    scanf("%d", &m); // maior valor
    scanf("%d", &s); // soma dos dígitos

    int valor = 0;

    for(int i = m-1; i < n; i--){
    	if (somaDigitos(i) == s){
            	valor = somaDigitos(i);
            	break;
        }
    }

    printf("%d", valor);

    return 0;
}
