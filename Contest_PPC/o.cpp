#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, d, e, f, g, h;

    cin >> a >> b >> c >> d >> e >> f >> g >> h;

    int first = (b*c)/g;
    int second = (d*e);
    int third = (f/h);

    int res = 0;
    res = min(first, second);
    res = min(res, third);

    cout << res/a << endl;

    return 0;
}
