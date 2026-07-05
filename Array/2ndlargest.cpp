// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n ;
    cin >> n;
    
    int arr[n];
    
    cout<< "Enter your elements:" <<endl;
    
    for(int i =0; i< n; i++){
        cin >> arr[i] ;
    }
    
    cout<<"This is ypur array : " << endl;
    for(int i =0; i< n; i++){
        cout<< arr[i] << endl ;
    }
    
    int largest = INT_MIN;
    int sec_large = INT_MIN;
    
    for(int i =0 ; i< n;i++){
        if(arr[i] > largest){
            sec_large = largest;
            largest = arr[i];
        }
        else if (sec_large != largest && sec_large < arr[i]){
            sec_large = arr[i];
        }
    }
    
    if(sec_large == INT_MIN){
        cout<< "No second largest found .";
        
    }else{
        cout<< sec_large;
    }
    return 0;
}