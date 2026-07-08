#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    
    getline(cin ,s);
    
    string res ="";
    unordered_set <char> hasmap;
    
  
    for(char ch : s){
        if(hasmap.find(ch) == hasmap.end()){
            res += ch;
            hasmap.insert(ch);
        }
    }
    
    cout<<res;
    
    
    
}