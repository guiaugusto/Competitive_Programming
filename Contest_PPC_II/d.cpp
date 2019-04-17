#include <bits/stdc++.h>

using namespace std;

int main(){

    int q;
    vector<int> v;
    cin >> q;
    int menor = 999999999;
    int menor_i = 0;
    int maior = 0;
    int maior_i = 0;
    int aux;
    int res = 0;

    for(int i = 0; i < q; i++){
        cin >> aux;

        if(aux > maior){
            maior = aux;
            maior_i = i;
        }

        if(aux <= menor){
            menor = aux;
            menor_i = i;
        }
    }

    if(maior_i < menor_i)
        res = maior_i + q-1 - menor_i;
    else
        res = maior_i + q-1 - menor_i - 1;

    cout << res << endl;

    return 0;
}
