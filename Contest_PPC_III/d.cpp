#include <bits/stdc++.h>

using namespace std;

int main(){

    int st;
    string s;
    int ct = 0;

    cin >> st;

    for(int i = 0; i < st; i++){
        cin >> s;

        if(s == "++X" || s == "X++"){
            ct += 1;
        }else{
            ct -= 1;
        }
    }

    cout << ct << endl;

    return 0;
}
