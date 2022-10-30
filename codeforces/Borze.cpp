#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string code;
    int i = 0;

    cin>>code;

    for(i;i<code.size();){
        if(code[i] == '.'){
            cout<<"0";
            i++;
        }else if(code[i] == '-' && code[i+1] == '.'){
            cout<<"1";
            i+=2;
        }else{
            cout<<"2";
            i+=2;
        }
    }
    
}