#include <bits/stdc++.h>

using namespace std;

int main(){

    string a;
    string b;
    string c;

    cin >> a >> b >> c;

    multiset<string> sa;
    multiset<string> sc;

    string aux;

    for(int i = 0; i < a.size(); i++){
        aux = a[i];
        sa.insert(aux);
    }

    for(int i = 0; i < b.size(); i++){
        aux = b[i];
        sa.insert(aux);
    }

    for(int i = 0; i < c.size(); i++){
        aux = c[i];
        sc.insert(aux);
    }

    if(sa == sc){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
