#include <bits/stdc++.h>

using namespace std;

int main(){

  int q, a;
  int contratada = 0;
  int untreated = 0;
  cin >> q;

  for(int i = 0; i < q; i++){
    cin >> a;

    if(a > 0){
      contratada += a;
    }else{
      if(contratada == 0){
        untreated++;
      }else{
        contratada--;
      }
    }
  }

  cout << untreated << endl;

  return 0;
}
