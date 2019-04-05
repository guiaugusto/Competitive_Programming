#include <bits/stdc++.h>

using namespace std;

class Values{
    public:
        int original_n;
        int module_n;
};

bool operator<(Values a, Values b){
    // empate
    if(a.module_n == b.module_n){
        if(a.original_n % 2 == 0 && b.original_n % 2 == 0){
            if(a.original_n < b.original_n){
                return true;
            }else{
                return false;
            }
        }else if(a.original_n % 2 != 0 && b.original_n % 2 != 0){
            if(a.original_n <= b.original_n){
                return false;
            }else{
                return true;
            }
        }else{
            if(a.original_n % 2 == 0 && b.original_n % 2 != 0){
                return false;
            }else if(a.original_n % 2 != 0 && b.original_n % 2 == 0){
                return true;
            }
        }
    }else{
        if(a.module_n < b.module_n){
            return true;
        }else{
            return false;
        }
    }

}

int main(){

    int n, m;
    int a;
    vector<Values> list_num;
    Values v;

    while(cin >> n >> m){

        cout << n << " " << m << endl;

        if(n == 0 || m == 0){
            break;
        }

        for(int i = 0; i < n; i++){
            cin >> a;
            v.original_n = a;
            v.module_n = a % m;
            list_num.push_back(v);
        }

        sort(list_num.begin(), list_num.end());

        for(int i = 0; i < list_num.size(); i++){
            cout << list_num[i].original_n << endl;
        }

        list_num.clear();
    }

    return 0;
}
