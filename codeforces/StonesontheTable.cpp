#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tam,cont=0;
    string s;

    cin>>tam;
    cin>>s;

    for(int i=0;i<tam;i++){
        if(s[i]==s[i+1]){
            cont++;
        }
    }
    cout<<cont;
    return 0;
}