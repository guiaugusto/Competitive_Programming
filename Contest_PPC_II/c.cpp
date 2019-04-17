#include <bits/stdc++.h>

using namespace std;

int main(){

    int v;
    vector<int> l;
    cin >> v;

    if(v % 2 == 1){
        cout << "-1" << endl;
    }else{
        for(int i = 1; i <= v; i++){
            if(i > 1){
                cout << " ";
            }
            if(v == 1){
                break;
            }else{
                if(i % 2 == 1){
                    cout << i+1;
                }else{
                    cout << i-1;
                }
            }

        }

        cout << endl;
    }

    return 0;
}
// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main(){
//
//     int v;
//
//     cin >> v;
//
//     vector<int> pp;
//     bool is_perfect = true;
//
//     for(int i = 0; i <= v; i++){
//         pp.push_back(i+1);
//     }
//
//     if(v == 1){
//         cout << -1 << endl;
//     }else{
//         for(int i = 1; i <= v; i++){
//
//         }
//     }
//
//
//     return 0;
// }
