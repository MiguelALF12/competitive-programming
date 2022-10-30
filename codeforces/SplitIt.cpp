#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t,n,k;
    string s,Ns,aux;
    cin>>t;
    while(t > 0){
        cin>>n>>k;
        cin>>s;
        for(int i=0;i<k;i++){
            Ns.push_back(s[i]);
        }  
        reverse(Ns.begin(), Ns.end())      ;
        for(int i=k+2;i<s.size();i++){
            aux.push_back(s[i]);
        }
        if(aux == Ns){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        t--;
    }

}