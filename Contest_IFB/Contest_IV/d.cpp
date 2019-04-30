#include <bits/stdc++.h>

using namespace std;

int main(){

    int q;

    cin >> q;

    vector<string> v;

    v.push_back("1");

    string aux, p;
    int counter = 0;

    for(int i = 0; i < q-1; i++){
        for(int j = 0; j < v[i].size(); j++){
            counter++;

            if(j+1 == v[i].size()){
                aux += to_string(counter);
                aux += v[i][j];
                counter = 0;
                break;
            }

            if(v[i][j] != v[i][j+1]){
                aux += to_string(counter);
                aux += v[i][j];
                counter = 0;
            }
        }
        v.push_back(aux);
        aux = "";
        counter = 0;
    }

    cout << v[q-1] << endl;

    return 0;
}
