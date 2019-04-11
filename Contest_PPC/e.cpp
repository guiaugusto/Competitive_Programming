#include <bits/stdc++.h>

using namespace std;

int main(){

    int q;
    double a;
    double res = 0;
    cin >> q;

    for(int i = 0; i < q; i++){
        cin >> a;
        res += a;
    }

    printf("%.12lf\n", res/q);

    return 0;
}
