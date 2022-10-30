#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int nFriends,x,nFingers = 0,nFingersDima=0;
    cin>>nFriends;
    for(int i=0;i<nFriends;i++){
        cin>>x;
        nFingers+=x;
    }
    for(int i=1;i<=5;i++){
        if((nFingers + i)%(nFriends + 1) != 1){
            nFingersDima++;
        }
    }
    cout<<nFingersDima;

}