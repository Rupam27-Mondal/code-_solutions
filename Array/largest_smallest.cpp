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
        cout<< arr[i] << " ";
        
    }
    cout<<endl;
    
    int largest = arr[0];
    int smallest = arr[0];
    
    for(int i =0 ; i< n ;i++){
        if(arr[i]> largest){
            largest = arr[i];
        }
        else if(arr[i]< smallest){
            smallest = arr[i];
        }
    }
    
    cout << largest<<endl;
    cout<< smallest <<endl;
    return 0;
}