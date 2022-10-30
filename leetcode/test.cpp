#include <bits/stdc++.h>
using namespace std;

 int diagonalSum(vector<vector<int>> mat) {
        
        int suma = 0;
        int tam = mat.size()-1, tam2 = mat.size();
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(i==j){
                    suma = suma + mat[i][j];
                    // tam--;
                }else if (j == tam-i){
                    suma = suma + mat[i][j];
                    // cout<<"i "<<i<<" ope "<<tam2-tam<<endl;
                    // tam--;
                }else{
                    continue;
                }
            }
        }
     return suma;   
    }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<diagonalSum({{1,1,1,1,},{1,1,1,1,},{1,1,1,1,},{1,1,1,1,}});
    // {{1,2,3},{4,5,6},{7,8,9}}
}