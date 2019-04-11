#include <bits/stdc++.h>

using namespace std;

int main(){

    int q;

    cin >> q;

    vector<int> a;
    vector<int> b;

    int aux;

    for(int i = 0; i < q; i++){
        cin >> aux;
        a.push_back(aux);
        cin >> aux;
        b.push_back(aux);
    }

    int qnt_0 = 0;
    int qnt_1 = 0;
    int res = 0;

    for(int i = 0; i < a.size(); i++){
        if(a[i] == 0){
            qnt_0++;
        }else{
            qnt_1++;
        }
    }

    res += min(qnt_0, qnt_1);

    qnt_0 = 0;
    qnt_1 = 0;

    for(int i = 0; i < b.size(); i++){
        if(b[i] == 0){
            qnt_0++;
        }else{
            qnt_1++;
        }
    }

    res += min(qnt_0, qnt_1);

    cout << res << endl;

    return 0;
}
