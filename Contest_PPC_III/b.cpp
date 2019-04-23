#include <bits/stdc++.h>

using namespace std;

int main(){

    locale loc;

    string s1, s2;
    string a, b;

    cin >> s1;

    cin >> s2;

    for(int i = 0; i < s1.size(); i++){
        b += toupper(s1[i]);
    }

    for(int i = 0; i < s2.size(); i++){
        a += toupper(s2[i]);
    }

    if(a == b){
        cout << 0 << endl;
    }else if(a < b){
        cout << 1 << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}
