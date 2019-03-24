#include <bits/stdc++.h>

using namespace std;

int main(){

    long long size;
    long long n;
    long long res = 0;
    long long limit = 0;

    cin >> size;

    vector<long long> v;

    v.push_back(-1);

    while(size--){
        cin >> n;
        v.push_back(n);
    }

    long long mid = v.size();
    long long aux;
    vector<long long> values;

    res += v[mid-1];

    limit = v[mid-1]-1;

    for(long long i = mid-2; i > 0; i--){

        if(v[i] <= limit){
            res += v[i];
            limit = v[i]-1;
        }else{
            res += limit;
        }
    }

    cout << res << endl;

    return 0;
}
