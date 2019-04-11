#include <bits/stdc++.h>

using namespace std;

int main(){

    int q;

    cin >> q;

    string s;

    string s1, s2;

    int size = 0;

    for(int i = 0; i < q; i++){
        cin >> s;

        if(s.size() > 10){
            s1 = s[0];
            s2 = s[s.size()-1];

            size = s.size()-2;

            cout << s1;
            cout << size;
            cout << s2 << endl;
        }else{
            cout << s << endl;
        }
    }


    return 0;
}
