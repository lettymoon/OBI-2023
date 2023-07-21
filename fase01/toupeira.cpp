#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e3+5;

int g[maxn][maxn];

int main (void){
    int n, m; 
    cin >> n >> m;

    for(int i = 1; i <= m; i++){
        int a, b; 
        cin >> a >> b;
        g[a][b] = g[b][a] = 1;
    }

    int p; cin >> p;
    int ct = 0;

    for(int i =1; i <= p; i++){
        int q; 
        cin >> q;
        int at; 
        cin >> at;
        bool ok = 1;
        for(int j = 1; j < q; j++){
            int ot;
            cin >> ot;
            if(g[at][ot] != 1) ok = 0;
            at = ot;
        }
        if(ok) ct++;
    }

    cout << ct << "\n";


    return 0;
}