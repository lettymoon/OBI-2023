#include <stdio.h>

#include <stdio.h>

int main(void){
    
    int a, b;
    scanf("%d%d", &a, &b);
    int arra[100005];
    int arrb[100005];
    
    for(int i = 0; i < a; i++)
        scanf("%d", &arra[i]);
        
    for(int i = 0; i < b; i++)
        scanf("%d", &arrb[i]);

    int j = 0;
    for(int i = 0; i < a; i++){
        if(arra[i] == arrb[j]){
            j++;
        }
    }

    if(j == b)
        printf("S");
    else
        printf("N");

    
    return 0;
}