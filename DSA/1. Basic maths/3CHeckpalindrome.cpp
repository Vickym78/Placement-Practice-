#include<bits/stdc++.h>
using namespace std;

void checkpalindrome(int n , int t){
    int rev = 0 ;
    while(t>0){
        int k = t%10;
        rev=rev*10+k;
        t/=10;
    }
   if(rev==n) cout<<"Palindrome";
   else cout<<"Not palindrome";
}

int main(){
    int n,t; cin>>n>>t; 
    checkpalindrome(n,t);
}