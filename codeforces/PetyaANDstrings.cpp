#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string g1,g2;
    cin>>g1;
    cin>>g2;

    transform(g1.begin(), g1.end(), g1.begin(),::tolower);
    transform(g2.begin(), g2.end(), g2.begin(),::tolower);

    if(g1.compare(g2) < 0){
        cout<<"-1";
    }else if(g1.compare(g2) > 0){
        cout<<"1";
    }else{
        cout<<"0";
    }
    
    return 0;
}