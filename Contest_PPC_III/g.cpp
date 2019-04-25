#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;

    cin >> n >> m;

    queue< pair<int, int> > q;

    int aux;

    pair<int, int> p;

    for(int i = 0; i < n; i++){
        cin >> aux;
        q.push(make_pair(aux, i));
    }

    while(q.size() > 1){
        if(q.front().first <= m){
            q.pop();
        }else{
            p = q.front();
            q.pop();
            p.first = p.first - m;
            q.push(p);
        }
    }

    cout << q.front().second+1 << endl;

    return 0;
}
