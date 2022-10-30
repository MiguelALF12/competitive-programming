#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int matrix[5][5];
    vector<int> center = {2,2};
    vector<int> one;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(matrix[i][j] == 1){
                one = {i,j};
                j = 5;
                i = 5;
            }
        }
    }
    int res = (int) (abs(center[0]-one[0])+ abs(center[1]-one[1]));
    cout<<res<<endl;

}