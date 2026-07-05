#include<iostream>
#include <set>
using namespace std;

int sum2 (int n){
        return n *(n+1)/2;
}

int main(){
    
    
    
    
    int n ;
    cin >> n;
    
    int arr[n];
    
    cout<< "Enter your elements:" <<endl;
    
    for(int i =0; i< n-1; i++){
        cin >> arr[i] ;
    }
    
    cout<<"This is your array : " << endl;
    for(int i =0; i< n-1; i++){
        cout<< arr[i] << " ";
        
    }
    cout<<endl;
    
    int xor1 = 0;
    int xor2 = 0;

    // XOR of numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        xor1 ^= i;
    }

    // XOR of array elements
    for (int i = 0; i < n - 1; i++) {
        xor2 ^= arr[i];
    }

    int missing = xor1 ^ xor2;

    
    cout<<"missing value" << missing <<endl;
    
    
    
}