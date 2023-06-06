#include <stdio.h>

int main(void){
    
    int v, a, f, p;
    scanf("%d", &v);
    scanf("%d", &a);
    scanf("%d", &f);
    scanf("%d", &p);
    
    if(v >= (a+f+p))
        printf("3");
    else if(v >= (a+f) || v >= (a+p) || v >= (f+p))
        printf("2");
    else if(v >= a || v >= f || v >= p)
        printf("1");
    else
        printf("0");

    return 0;
}