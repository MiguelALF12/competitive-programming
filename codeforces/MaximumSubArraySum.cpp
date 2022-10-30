#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> p;
    stack<int> st;

    int x,best=0,subSetsIndex=1,tam;
    cin>>tam;
    while(tam){
        cin>>x;
        p.push_back(x);
        tam--;
    }
    int sum=p[0];
    int a = 0;
    while(a<p.size()){ 
        if(abs((int)(subSetsIndex-p.size()) == 1)){
            a++;
            subSetsIndex = a+1;
            sum=p[a];
        }else{
            best=max(best,sum);
            sum+=p[subSetsIndex];           
            subSetsIndex++;
        }
    }

    cout<<best;
    

}

