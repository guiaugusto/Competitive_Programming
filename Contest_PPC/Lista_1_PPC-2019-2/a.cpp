#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, a, c;
  cin >> n >> c;
  vector<int> v;
  int counter = 0;

  for(int i = 0; i < n; i++){
    cin >> a;
    v.push_back(a);
  }

  counter = 1;

  for(int i = 1; i < n; i++){
    if(v[i] - v[i-1] > c){
      counter = 0;
    }
    counter++;
  }

  cout << counter << endl;

  return 0;
}
