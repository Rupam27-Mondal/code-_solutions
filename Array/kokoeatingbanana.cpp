class Solution {
public:
    int maxBanana(vector<int>&a){
         return *max_element(a.begin(), a.end());
    }
    int hours(vector<int>& a,int n , int speed){
        int hr = 0;
        for(int i =0; i<n;i++){
            hr += a[i]/speed;
            if(a[i] % speed != 0){
                hr++;
            }

        }
        return hr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxBanana(piles);
        int res = -1;
        
        while(low <= high){
            int guess = low + (high-low)/2;
            if(hours(piles , piles.size() , guess) <= h){
                res = guess;
                high = guess -1;
            }
            else{
                low = guess +1;
            }
        }
        return res;
    }
};