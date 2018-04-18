#include <bits/stdc++.h>

using namespace std;

class Rede{
    public:
        int nome;
        int fc;
};

bool operator< (Rede a, Rede b){
    if(a.fc < b.fc)
        return false;
    else
        return true;
}

int main(){

    int op;
    vector<Rede> rede;
    vector<Rede> rede_aux;
    Rede aux;
    Rede best;
    int c = 0;
    int a, b;

    while(cin >> op, op != -1){
        if(op == 1){
            cin >> a;
            cin >> b;

            aux.nome = a;
            aux.fc = b;

            rede.push_back(aux);
            c++;

        }else if(op == 2){
            if(!rede.empty()){
                rede_aux = rede;
                sort(rede_aux.begin(), rede_aux.end());
                printf("melhor rede: %d\n", rede_aux[0].nome);
            } else {
                printf("nenhuma rede segura disponivel\n");
            }
        }else if(op == 3){
            if(!rede.empty()){
                printf("rede bloqueada: %d\n", rede[c-1].nome);
                rede.pop_back();
            } else {
                printf("nenhuma rede segura disponivel\n");
            }

            c--;
        }
    }

    return 0;
}
