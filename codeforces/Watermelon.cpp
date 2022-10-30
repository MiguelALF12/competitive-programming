#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> pete;
    vector<int> bill;

    int w;
    string ans;
    bool val = false;

    cin>>w;
    

    for (long unsigned int i = 2; i < 100; i+=2){
        pete.push_back(i);
        bill.push_back(i);
    }
    

    for (long unsigned int i = 0; i < pete.size();i++){
        if(i < (long unsigned int) w){
            for(long unsigned j = 0; j < bill.size(); j++){
                if(j < (long unsigned int) w){
                    if(pete[i] + bill[j] == w){
                        val = true;
                        i = pete.size();
                        j = bill.size();
                    }else{
                        val = false;
                    }
                }else{
                    i = pete.size();
                    j = bill.size();
                }
            }
        }
    }

    if(val){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    

}