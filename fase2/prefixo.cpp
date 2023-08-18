#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    char arrn[1001];
    for(int i=0; i < n; i++){
        cin >> arrn[i];
    }
    
    int m;
    cin >> m;
    char arrm[1001];
    for(int i=0; i < m; i++){
        cin >> arrm[i];
    }
    
    int cont = 0;
    if(arrn[0] != arrm[0])
        cout << cont;
    else{
        for(int i=0; i < m; i++){
            if(arrn[i] == arrm[i])
                cont++;
            else
            break;
        }
    }
    if(cont > 0)
        cout << cont;  

    return 0;
}