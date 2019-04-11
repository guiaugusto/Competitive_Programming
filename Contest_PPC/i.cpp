#include <bits/stdc++.h>

using namespace std;

int main(){

    int q;

    cin >> q;

    int a, b;

    int p = 0;
    int maior = 0;

    for(int i = 0; i < q; i++){
        cin >> a >> b;
        p -= a;
        p += b;

        if(maior < p){
            maior = p;
        }
    }

    cout << maior << endl;

    return 0;
}
