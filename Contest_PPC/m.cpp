#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    set<string> c;
    cin >> s;
    string sa;

    for(int i = 0; i < s.size(); i++){
        sa = s[i];
        c.insert(sa);
    }

    if(c.size() % 2 != 0){
        cout << "IGNORE HIM!" << endl;
    }else{
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}
