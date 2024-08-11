#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin >> n;
    
    int original = n;  // Store the original value of n
    int arm = 0;
    
    while(n > 0){
        int k = n % 10;  // Get the last digit
        arm = arm + (k * k * k);  // Add the cube of the digit to arm
        n /= 10;  // Remove the last digit
    }
    
    if(original == arm) 
        cout << "Armstrong";
    else 
        cout << "Not Armstrong";
}
