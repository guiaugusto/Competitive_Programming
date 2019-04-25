#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    vector<int> v;

    cin >> n;

    int a;

    for(int i = 0; i < 7; i++){
        cin >> a;
        v.push_back(a);
    }

    int i = 0;

    while(n > 0){

        n -= v[i];

        if(n <= 0)
            break;

        if(i == v.size()-1)
            i = -1;
        i++;
    }

    cout << i+1 << endl;

    return 0;
}
