#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b;
  long long int casas = 0;
  cin >> a >> b;


  int v[b];
  int aux;
  int value = 0;

  for(int i = 0; i < b; i++){
    cin >> aux;
    v[i] = aux;
  }
  casas += v[0]-1;
  int i;
  for(i = 1; i < b; i++){
    if(v[i-1] < v[i]){
      casas += v[i] - v[i-1];
    }else if(v[i-1] > v[i]){
      value = (abs(a - v[i-1]) + v[i]);
      casas += value;
    }
  }

  cout << casas << endl;
  return 0;
}
