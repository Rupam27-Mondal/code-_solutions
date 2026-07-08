#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    
    cin >> s;
    
    
    int vowel =0;
    int consonent = 0;
    
    for(char ch : s){
        ch = tolower(ch);
        if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u'){
            vowel++;
        }else
            consonent++;
    }
    
    cout <<"vowel:"<<vowel;
    cout <<"consonent:"<<consonent;
    
    
    
    
}