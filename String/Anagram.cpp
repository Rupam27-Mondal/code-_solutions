// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    string str1;
    string str2;
    
    cin>> str1;
    cin >>str2;
    
    if(str1.length() != str2.length()){
        cout<< "Not anagram";
        return 0;
    }
    
    int count[26]={0};
    
    for(int i =0; i<str1.length(); i++){
        count[str1[i]- 'a']++;
        count[str2[i] - 'a']--;
    }
    
    for(int i =0; i<26;i++){
        if(count[i] != 0){
            cout<<"not anagram";
        }
    }
    
    
    cout<<"Anagram";
}