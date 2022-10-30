#include <bits/stdc++.h>
using namespace std;
 
bool isInteger(string& a){
     string::const_iterator it = a.begin();
     long unsigned int minSize = 0;
     if(a.size()>0 && (a[0] == '-' || a[0] == '+')){
       it++;
       minSize++;
     }
     while (it != a.end() && isdigit(*it)) ++it;
     return a.size()>minSize && it == a.end();
 
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string s;
    while(cin>>s){
         int tam = s.length();
         string aux = s.substr(1,tam-2);
        if(!isInteger(s)){
            if(s.length() > 10 ){
                cout<< s[0]<<aux.length()<<s[tam-1]<<endl;
            }else{
                cout<<s<<endl;
            }
        }
    }
 
}
