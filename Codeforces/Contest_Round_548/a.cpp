#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int zeroc = 0;
    int res = 0;
    int size;

    cin >> size;

    cin >> s;

    string a;

    for(int i = 0; i < s.size(); i++){
        a = s[i];
        if(stoi(a) % 2 == 0){
            res += i+1;
        }
    }

    cout << res << endl;

    return 0;
}
