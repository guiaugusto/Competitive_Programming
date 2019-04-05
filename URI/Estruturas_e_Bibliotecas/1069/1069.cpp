#include <bits/stdc++.h>

using namespace std;

int main(){

    int q;
    string s;

    stack<int> st;

    int res = 0;

    cin >> q;
    getchar();

    for(int i = 0; i < q; i++){
        getline(cin, s);

        for(int j = 0; j < s.size(); j++){
            if(s[j] == '>' && st.top() == '<'){
                st.pop();
                res++;
            }else{
                st.push(s[j]);
            }
        }

        cout << res << endl;

        res = 0;
    }

    return 0;
}
