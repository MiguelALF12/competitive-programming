#include <bits/stdc++.h>
#define RE \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
//Recordar que el tipo de entero manejado en los vectores
//es long unsigned int
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    RE;
    vector<int> F1;
    int Nforces,i=0,num,sumaX = 0, sumaY = 0, sumaZ = 0;
    cin>>Nforces;
    
    
    while (i != Nforces*3){
        //cin>>F1[i];
        cin>>num;
        F1.push_back(num);
        i++;
        //DE este método se puede leer las lineas e ingresarlas
        //A un vector, pero sigo sin entender por que los otros no?
    }
    
    for(long unsigned int x=0,y=1,z=2,h=0; h < (long unsigned int) Nforces; x+=3,y+=3,z+=3,h++){
        sumaX = sumaX + F1[x];
        sumaY = sumaY + F1[y];
        sumaX = sumaX + F1[z];
    }

    if(sumaX == 0 && sumaY==0 && sumaZ==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}


// void solve(){ //Por que si la función no tiene argumentos, mas devuelve algo, no lo guarda?, la función era queue<char>& func..
//     int Qtam,time;
//     string x;
//     queue<char> st,aux,stRes;
//     char boys,girls;
//     cin>>Qtam>>time;
//     cin>>x;
//     for(int i=0;i<x.size();i++){
//         if(x[i] != ' '){
//             st.push(x[i]);
//         }
//     }

//     for(int i=0;i<time;i++){
//         while(st.front()!=NULL){
//             if (st.front() == 'B' && st.size() != 1){
//                 boys = st.front();
//                 st.pop();
//                 if(st.front() == 'G'){
//                     girls = st.front();
//                     st.pop();
//                     stRes.push(girls);
//                     stRes.push(boys);
//                 }
//             }else{
//                 stRes.push(st.front());
//                 st.pop();
//             }
//         }
//         aux = stRes; 
//         stRes = st;
//         st = aux;
//         // while (st.front() != NULL){
//         //     cout<<st.front();
//         //     st.pop();
//         // }
//         // cout<<endl;
//         // st = aux;   
//     }
    
//     while (st.front() != NULL){
//         cout<<st.front();
//         st.pop();
//     }
// }

