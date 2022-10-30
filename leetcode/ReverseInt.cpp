#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int32_t main(){
fast
// Fuck Ratings, I'm in Love with Experience.
// int t=1;
// int32_t num = 45;
// cin>>t;
// while(t--){
    
// }

int number = 0;
// cout<<number;
cin>>number;
if(number <= pow(2,31)*-1 || number >= pow(2,31)-1){
    // cout<<"aquí";
    // cout<<(number < pow(2,31)? 1000:2000);
    return 0;
}else{
    string number_to_string = to_string(number);
    int is_less_than_zero = false;
    if(number >= 0 && number <= 9){
        cout<<number;
        // return number;
    }else{
        // cout<<"aquí 1";
        if(number_to_string[0] == '-'){
            is_less_than_zero = true;
            number_to_string.erase(0,0);
            cout<<"negativo";
        }
        int string_length = number_to_string.size();
        char aux;
        while(string_length != 1){
            // cout<<"aquí";
            for(int index = 0; index < string_length - 1; index++){
                aux = number_to_string[index];
                number_to_string[index]= number_to_string[index + 1];
                number_to_string[index + 1] = aux;
            }
            string_length--;
        }
    }
    cout<<number_to_string;
    number = stoi(number_to_string, nullptr);
    if(is_less_than_zero){
        cout<<number*-1;
        // return number * -1;
    }else{
        cout<<number;
        // return number;
    }

    
}



}
