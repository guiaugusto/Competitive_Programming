#include <bits/stdc++.h>

using namespace std;

int main (){

    string frase;

    while(getline(cin, frase)){
        list<char> text;
        list<char>::iterator it;

        it = text.begin();
        for(auto l : frase){
            if(l == '['){
                it = text.begin();
            }else if(l == ']'){
                it = text.end();
            }else{
                text.insert(it, l);
            }
        }

        for(auto l : text){
            cout << l;
        }

        cout << endl;

        frase.clear();
    }

    return 0;
}
