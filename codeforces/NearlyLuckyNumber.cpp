#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll luckyNumber,HoldluckyNumber,luckyNumberRest;
    int luckyNumsCounter = 0;
    
    cin>> luckyNumber;
    HoldluckyNumber = luckyNumber;
    
    while(HoldluckyNumber > 0){
        luckyNumberRest = (HoldluckyNumber % 10);
        HoldluckyNumber = HoldluckyNumber / 10;
        if(luckyNumberRest == 4 || luckyNumberRest == 7){
            luckyNumsCounter++;
        }
    }
    if(luckyNumsCounter == 4 || luckyNumsCounter == 7 ){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}