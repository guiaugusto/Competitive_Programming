#include <bits/stdc++.h>

using namespace std;

int main(){

  int qq;
  int a, b;
  cin >> qq;
  int counter = 0;

  for(int i = 0; i < qq; i++){
    cin >> a >> b;

    if(a+2 <= b) counter++;
  }

  cout << counter << endl;

  return 0;
}
