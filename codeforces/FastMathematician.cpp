#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string o1,o2;
    vector<int> sum;
    cin>>o1;
    cin>>o2;
    

    for(int i=0;i<o1.size();i++){
        if(o1[i] != o2[i]){
            sum.push_back(1);            
        }else{
            sum.push_back(0);
        }
    }
    for(int i=0;i<(int)sum.size();i++){
        cout<<sum[i];
    }
    cout<<endl;


    
}