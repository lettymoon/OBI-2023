#include <stdio.h>

int main(void){
    
    int n, m;
    scanf("%d%d", &m, &n);
    int arr[502][502];
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
            
        }
    }
    
    int p;
    scanf("%d", &p);
    int tipo = 0, tamanho = 0;
    int numvendas = 0;
    
    for(int c = 0; c < p; c++){
        scanf("%d%d", &tipo, &tamanho);
        if(arr[tipo-1][tamanho-1] > 0){
            numvendas++;
            arr[tipo-1][tamanho-1] = arr[tipo-1][tamanho-1] - 1;
        }
    }
    
    printf("%d", numvendas);
    
    return 0;
	}
