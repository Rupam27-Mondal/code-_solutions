class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestEnd = nums[0];
        int ans =nums[0];

        for(int i=1; i<nums.size();i++){
            int c1 = bestEnd + nums[i];
            int c2 = nums[i];

            bestEnd = max(c1 ,c2);
            ans = max(ans ,bestEnd);

        }
        return ans;
    }
};