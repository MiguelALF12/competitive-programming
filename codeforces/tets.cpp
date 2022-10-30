#include "bits/stdc++.h"
#include <iostream>
using namespace std;
int main() {
    cout<<"Hello world";
    stack<int> p;

    p.push(45);
    p.push(34);
    p.push(12);
    cout<<endl;
    cout<<p.size()<<endl;
    for(unsigned long int i = 0; i <= p.size(); i++){
        cout<<i<<endl;
        cout<<p.top()<<endl;
        p.pop();
    }
    

}