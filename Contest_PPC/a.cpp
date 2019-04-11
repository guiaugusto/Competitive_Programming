#include <bits/stdc++.h>

using namespace std;

void errado(){
    cout << "NO" << endl;
}

void certo(){
    cout << "YES" << endl;
}

int main(){

    int prime_l[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < 15; i++){
        if(prime_l[i] == n){
            if(prime_l[i+1] == m){
                certo();
            }else{
                errado();
            }
            i = 15;
        }
    }

    return 0;
}
