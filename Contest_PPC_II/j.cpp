#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    multiset<int> res;
    cin >> s;
    string aux;
    int v;

    for(int i = 0; i < s.size(); i++){
        if(s[i] != '+'){
            aux = s[i];
            res.insert(stoi(aux));
        }
    }

    int count = 0;

    for(auto element : res){
        cout << element;
        count++;
        if(count != res.size()){
            cout << "+";
        }
    }

    cout << endl;

    return 0;
}
