#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    set<int> st;
    bool h = false;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            h = true;
        }
    }

    if(h){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
