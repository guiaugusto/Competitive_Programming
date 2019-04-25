#include <bits/stdc++.h>

using namespace std;

int main(){

    int q;
    map<int, int> m;
    vector<int> qy;
    cin >> q;
    int a;

    for(int i = 0; i < q; i++){
        cin >> a;
        m[a] = i;
    }

    int qr;

    cin >> qr;

    for(int i = 0; i < qr; i++){
        cin >> a;
        qy.push_back(a);
    }

    long long res1 = 0;
    long long res2 = 0;

    for(int i = 0; i < qy.size(); i++){
        res1 += m[qy[i]]+1;
        res2 += m.size() - m[qy[i]];
    }

    cout << res1 << " " << res2 << endl;
    return 0;
}
