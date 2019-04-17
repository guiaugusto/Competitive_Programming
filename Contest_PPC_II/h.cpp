#include <bits/stdc++.h>

using namespace std;

int main(){

    int q;
    int a;
    cin >> q;
    stack<int> s;
    int menor = 0;
    int maior = 0;
    s.push(0);

    for(int i = 0; i < q; i++){
        cin >> a;
        if(i == 0){
            menor = a;
            maior = a;
        }else if(maior < a){
            s.push(a);
            maior = a;
        }else if(a < menor){
            s.push(a);
            menor = a;
        }
    }

    cout << s.size()-1 << endl;

    return 0;
}
