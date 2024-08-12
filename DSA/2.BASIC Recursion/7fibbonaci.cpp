#include<bits/stdc++.h>
using namespace std; 
int fibo(int n){
    if(n==1 || n==2) return  1 ;

   return fibo(n-1)  + fibo(n-2); // nth fibonaci

}



int main(){
    int n ; cin>>n ;
    cout<< fibo(n)<<endl;
    // for series
    for(int i =1;i<=n;i++){
        cout<<fibo(i)<<" ";
    }
}