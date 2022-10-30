#include <bits/stdc++.h>


using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> ls[100005],ns[100005];
    int tamls,tamns,x;

    cin>>tamls;
    while(tamls){
        cin>>x;
        ls.push_back(x);
        tamls--;
    }
    cin>>tamns;
    while (tamns){
        cin>>x;
        ns.push_back(x);
        tamns--;
    }
    
    int VasyaCount=0,PetiaCount=0,vasyaIndex,petyaindex,QuerieIndex = 0;
    bool verVasya = false,verPetya = false;

    // for(int i=0;i<ns.size();i++){
    //     vasyaIndex = 0;
    //     while(true){
    //         if(ls[vasyaIndex] == ns[i]){
    //             VasyaCount+=1;
    //             break;
                
    //         }else{
    //             VasyaCount+=1;
    //             vasyaIndex++;
    //         }
    //     }
    //     petyaindex = (int) ls.size() - 1;
    //     while (true)
    //     {
    //         if(ls[petyaindex] == ns[i]){
    //             PetiaCount+=1;
    //             break;
    //         }else{
    //             PetiaCount+=1;
    //             petyaindex--;
    //         }
    //     }
        
    // }
    // cout<<VasyaCount<<" "<< PetiaCount;
int b;
    for(int i=0;i<ns.size();i++){
        verPetya = false;
        verVasya = false;
       for(vasyaIndex = 0, petyaindex = (int)ls.size()-1,b = 0 ; b < ls.size(); vasyaIndex++,petyaindex--,b++){
           if(verVasya == false){
               if(ls[vasyaIndex]==ns[i]){
               //lo encuentra, ahora debe de seguir con petya
               VasyaCount++;
            //    cout<<"Lo encuentra vasya"<<VasyaCount<<endl;
               verVasya = true;
               }else{
                   VasyaCount++;
                //    cout<<"no encuentra vasya"<<VasyaCount<<endl;
                   }
           }
           if(verPetya == false){
               if(ls[petyaindex] == ns[i]){
               //lo encuentra, ahora debe de seguir con el ciclo
            //    cout<<"Lo encuentra petya"<<PetiaCount<<endl;
               PetiaCount++;
               verPetya = true;
               }else{
                   PetiaCount++;
                //    cout<<"no encuentra petya"<<PetiaCount<<endl;
                   }
           }
           if(verVasya&&verPetya){
            //    cout<<"Aquí "<<endl;
               b = ls.size();
           }
       }
    }

    cout<<VasyaCount<<" "<< PetiaCount;
    

    return 0;
}