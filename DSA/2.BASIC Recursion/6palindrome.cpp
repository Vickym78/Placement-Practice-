#include<bits/stdc++.h>
using namespace std; 

bool palindrome(int i , string s ){

    // first and last values
      // Base Condition
    // If i exceeds half of the string means all the elements 
    // are compared, we return true.
    if(i>=s.length()/2) return true;
    
    // If the start is not equal to the end, not the palindrome.
    if(s[i]!=s[s.length()-i-1]) return false;
    
    // If both characters are the same, increment i and check start+1 and end-1.
    return palindrome(i+1,s);


}

int main(){
    string n ;  cin>>n;
  cout<<palindrome(0,n);
    
    }