#include <stdio.h>

int main(void){

    // primeiro ler a matriz e definir sua dimenssão
    int n, arr[12][12];
    scanf("%d", &n);
    int i;

    for(i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // descobrir qual elemento da matriz tem valor 0
    int valori = 0, valorj = 0;

    for(i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 0){
            valori = i;
            valorj = j;
            }
        }
    }

    // saber o valor mágico da soma das linhas, colunas e diagonais
    int soma = 0;

    if(valori == 0){
        for (i = 0; i < n; i++)
            soma += arr[1][i];
    }
    else{
        for (i = 0; i < n; i++)
            soma += arr[0][i];
    }
        
    // subtrair o valor mágico pelos elementos da linha que contém o valor ilegível (0)
    
    for(i = 0; i < n; i++)
        soma -= arr[valori][i];

    // mostrar o valor ilegível e sua localização na matriz

    printf("%d\n", soma);
    printf("%d\n", valori+1);
    printf("%d\n", valorj+1);


    return 0;
}