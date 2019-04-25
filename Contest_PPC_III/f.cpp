#include <bits/stdc++.h>

using namespace std;

int main(){

    int a;

    cin >> a;

    int c;
    int res = 0;

    for(int i = 0; i < a; i++){
        cin >> c;
        res += c;
    }

    int opt = 0;

    for(int i = 0; i < 5; i++){
        if((res+i)%(a+1) != 0){
            opt++;
        }
    }

    cout << opt << endl;

    return 0;
}
