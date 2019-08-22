#include <bits/stdc++.h>

using namespace std;


int main(){

  string s;

  cin >> s;

  sort(s.begin(), s.end());

  string res = s;
  string reversed;
  string result;

  for(int i = 0; i < s.size(); i++){
    for(int j = i; j < s.size(); j++){
      result = s.substr(i, j);
      reversed = result;
      // cout << result << endl;
      // cout << to_string(result > res) << endl;
      reverse(reversed.begin(), reversed.end());
      if(result == reversed && result > res){
        res = result;
      }
    }
  }

  cout << res << endl;

  return 0;
}
