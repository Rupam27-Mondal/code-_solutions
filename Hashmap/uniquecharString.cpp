class Solution {    
public:
    int firstUniqChar(string s) {
       unordered_map<char,int>f;
       int len = s.size();
       for(int i =0; i<len;i++){
        f[s[i]]++;
       } 
       for(int i=0;i<len;i++){
        if(f[s[i]] == 1)
            return i;

       }
       return -1;
    }
};