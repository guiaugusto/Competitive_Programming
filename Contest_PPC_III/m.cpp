#include <bits/stdc++.h>

using namespace std;

bool operator<(pair<int, int> a, pair<int, int> b){
    if(a.first < b.first){
        return true;
    }else{
        return false;
    }
}

int main(){

    multiset< pair<int, int> > m;

    int n;

    cin >> n;
    int d;

    for(int i = 0; i < n; i++){
        cin >> d;
        m.insert(make_pair(d, i));
    }

    pair<int, int> m1;
    pair<int, int> m2;

    int c = 0;

    for(auto x : m){
        if(c == 1){
            m2 = x;
            break;
        }else{
            m1 = x;
        }
        c++;
    }

    if(m1.first == m2.first){
        cout << "Still Rozdil" << endl;
    }else{
        cout << m1.second + 1 << endl;
    }

    return 0;
}
