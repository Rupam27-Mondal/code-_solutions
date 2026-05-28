
//Kedane's one deletion for maximum subarray sum with one deletion allowed

class Solution {
public:
    int maximumSum(vector<int>& a) {
        int power = 0;
        int nopower = a[0];
        int ans = a[0];
        int n = a.size();
        for(int i=1; i<n ; i++){
            int v1 = a[i];
            int v2 = nopower + a[i];
            int v3 = power + a[i];
            int v4 = nopower;

            ans =max(ans, max(max(v1,v2),max(v3,v4)));

            power = max(v3,v4);
            nopower = max(v1,v2);
        }
        return ans;

    }
};