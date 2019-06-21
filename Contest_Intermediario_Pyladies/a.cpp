#include <bits/stdc++.h>

using namespace std;

int main(){
  int c;

  cin >> c;
  getchar();
  string s;
  while(c--){
    getline(cin, s);

    for(int i = 0; i < s.size(); i++){
      if(isalpha(s[i]))
        s[i] = s[i] + 3;
    }
    reverse(s.begin(), s.end());
    for(int i = (s.size()/2); i < s.size(); i++){
      s[i] = s[i] - 1;
    }

    for(int i = 0; i < s.size(); i++){
      if(s[i] == '\n')
        cout << ("\\n");
      else
        cout << s[i];
    }
    cout << endl;
  }

  return 0;
}
