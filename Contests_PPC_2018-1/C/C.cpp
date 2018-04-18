#include <bits/stdc++.h>

using namespace std;

int main(){

    string A = "";
    string B = "";
    int tc;
    string::iterator it = A.begin();

    cin >> tc;

    while(tc--){
        cin >> A;
        cin >> B;

        int i = A.find(B);

        cout << A << " - ";
        cout << B << " = ";

        A.erase(i, (int)B.size());

        cout << A << endl;
    }

    return 0;
}
