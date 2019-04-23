#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, s;
    int ct = 0;
    cin >> s;

    for(int i = 0; i < s; i++){
        cin >> a >> b >> c;
        if(a+b+c >= 2){
            ct++;
        }
    }

    cout << ct << endl;

    return 0;
}
