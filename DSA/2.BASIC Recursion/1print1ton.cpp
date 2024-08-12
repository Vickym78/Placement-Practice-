#include<bits/stdc++.h>
using namespace std;

// printing 1 to n 

void func(int n ){
    if(n==0) return ; 
    func(n-1);
    cout<<n<<" ";
}


void revprint(int n ){
    if(n==0) return ; 
   
    cout<<n<<" ";
    revprint(n-1);
}
int main(){
  int n = 10;
  func(n);
  revprint(n);
 

}
