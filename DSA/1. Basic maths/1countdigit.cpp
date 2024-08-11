#include<bits/stdc++.h>
using namespace std; 


int main(){
    int n ; cin>>n; // taking digit as input
    int c = 0;
    if(n==0) cout<<1;
    else{
    while(n>0){
        c++;
        n/=10;
    }

    cout<<c;
    }
}