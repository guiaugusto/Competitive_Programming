#include <bits/stdc++.h>

using namespace std;

int main(){

    string s1, s2, s3 = "";
    cin >> s1 >> s2;

    for(int i = s1.size()-1; i >= 0; i--){
        if(s1[i] == '0' && s2[i] == '0'){
            s3 += "0";
        }else if(s1[i] == '1' && s2[i] == '1'){
            s3 += "0";
        }else{
            s3 += "1";
        }
    }

    for(int i = s3.size()-1; i >= 0; i--){
        cout << s3[i];
    }

    cout << endl;
    return 0;
}
