#include <iostream>

using namespace std;

int main(){
    //ler as variáveis
    
    int e, m, d;
    cin >> e >> m >> d;
    int x[m];
    int y[d];
    for(int i=0; i<m+d; i++){
        cin >> x[i] >> y[i];
    }
    
    int v = e/3;
    int arr[3][v];
    for(int i=0; i<v; i++)
        for(int j=0; j<v; j++)
            cin >> arr[i][j];
            
    // verificação
    
    int contx=0;
    
    for(int a=0; a<m; a++){
        for(int i=0; i<3; i++){
            for(int j=0; j<v; j++){
                if(arr[i][j]!=x[a] && arr[i+1][j]!=y[a])
                    contx++;
            }
        }
    }
    
    int conty=0;
    
    for(int m=m; m<m+d; m++){
        for(int i=0; i<3; i++){
            for(int j=0; j<v; j++){
                if(arr[i][j]!=x[m] && arr[i+1][j]!=y[m])
                    conty++;
            }
        }
    }
    
    
    
    int resx = contx/2;
    int resy = conty/2;
    
    int result = resy;
    
    if(resx > 0)
        result += (resx-m);

    // imprimir resultado
    
    cout << result;
    
    return 0;
}