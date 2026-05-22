class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>need;
        unordered_map<char,int>have;

        // for(char c : text){
        //     have[c]++;
        // }

        for(int i = 0; i < text.size(); i++){
            have[text[i]]++;
        }

        need['b'] = 1;
        need['a'] = 1;
        need['l'] = 2;
        need['o'] = 2;
        need['n'] =1;

        int res =INT_MAX;
        for(auto i :need){
            int c =i.first;
            int fneed = i.second;
            int fhave = have[c];
            int time = fhave/fneed;
            res = min(res,time);
        }
        return res;      
    }
};