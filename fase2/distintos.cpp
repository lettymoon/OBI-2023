//não finalizado

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[10001];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int contres = 0;
    int cont = 0;
    
    for(int i=1; i<n; i++){
        if(cont == 3){
            contres++;
            cont = 0;
        }
        else if(arr[i] != arr[i+1] && arr[i+1] != arr[i-1])
            cont++;
    }
    
    cout << contres;
    return 0;
}