#include <bits/stdc++.h>

using namespace std;

int main(){

    int A, B, C, D;
    int quantidade;
    set<int> conjunto;

    while(cin >> A >> B >> C >> D, (A && B && C && D)){

        quantidade = 0;

        int menor, maior;

        maior = max(A, B);
        menor = min(A, B);

        while(menor < maior){
            conjunto.insert(menor);
            quantidade++;
            menor++;
        }

        maior = max(C, D);
        menor = min(C, D);

        while(menor < maior){
            conjunto.insert(menor);
            quantidade++;
            menor++;
        }

        if(quantidade == conjunto.size())
            cout << "Linhas autorizadas" << endl;
        else
            cout << "Precisamos de novas linhas!" << endl;

        conjunto.clear();

    }

    return 0;
}
