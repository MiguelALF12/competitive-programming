#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int Qtam,time;
    // string x;
    // queue<char> st,aux,stRes;
    // char boys,girls;
    // cin>>Qtam>>time;
    // cin>>x;
    // for(int i=0;i<x.size();i++){
    //     if(x[i] != ' '){
    //         st.push(x[i]);
    //     }
    // }

    // for(int i=0;i<time;i++){
    //     while(st.front()!=NULL){
    //         if (st.front() == 'B' && st.size() != 1){
    //             boys = st.front();
    //             st.pop();
    //             if(st.front() == 'G'){
    //                 girls = st.front();
    //                 st.pop();
    //                 stRes.push(girls);
    //                 stRes.push(boys);
    //             }
    //         }else{
    //             stRes.push(st.front());
    //             st.pop();
    //         }
    //     }
    //     aux = stRes; 
    //     stRes = st;
    //     st = aux;
    // }
    
    // while (st.front() != NULL){
    //     cout<<st.front();
    //     st.pop();
    // }


    int Qtam,time,i;
    string q;
    cin>>Qtam>>time;
    cin>>q;
    for(i=0;i<time;i++){
        for(int j=0;j<Qtam-1;j++){
            if(q[j] == 'B' && q[j+1] == 'G'){
                swap(q[j],q[j+1]);
                j++;
            }
        }
    }
    cout<<endl;
    cout<<q;
}