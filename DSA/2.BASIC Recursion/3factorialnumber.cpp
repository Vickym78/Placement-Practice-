#include<iostream>
using namespace std; 

int fact(int n){
    if(n==0 || n==1) return  n ;
    return n* fact(n-1) ; //5*4*3 ...
}

int main(){
    int n ;  cin>>n;
    cout<< fact(n)<<endl;
    
}