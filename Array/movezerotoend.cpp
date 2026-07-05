// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
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
        cout<< arr[i] << " ";
        
    }
    cout<<endl;
    int j =0;
    for(int i =0;i < n;i++){
        if(arr[i] != 0){
            swap(arr[i] , arr[j]);
            j++;
        }
    }
    
    for(int i =0; i< n; i++){
        cout<< arr[i] << " ";
        
    }
    return 0;
}