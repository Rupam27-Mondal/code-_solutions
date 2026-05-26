class Solution {
public:
    int maxProduct(vector<int>& a) {

        int pref = 1;
        int suff = 1;
        int n = a.size();

        int ans = INT_MIN;

        for(int i=0;i<n;i++){

            if(pref==0) pref=1;
            if(suff==0) suff=1;

            pref *= a[i];
            suff *= a[n-i-1];

            ans = max(ans,max(pref,suff));
        }

        return ans;
    }
};