#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int contUP = 0, contLOW = 0;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(islower(s[i])){
            contLOW++;
        }else{
            contUP++;
        }
    }

    if(contUP > contLOW){
        transform(s.begin(), s.end(), s.begin(),::toupper);
        cout<<s;
   }else if(contLOW > contUP){
        transform(s.begin(), s.end(), s.begin(),::tolower);
        cout<<s;
   }else{
        transform(s.begin(), s.end(), s.begin(),::tolower);
        cout<<s;
   }
}