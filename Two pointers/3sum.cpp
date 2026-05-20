class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        int n = arr.size();
        vector<vector<int>> result;

        for(int i = 0; i < n-2; i++) {

            // Skip duplicate first elements
            if(i > 0 && arr[i] == arr[i-1])
                continue;

            int left = i + 1;
            int right = n - 1;

            while(left < right) {

                int sum = arr[i] + arr[left] + arr[right];

                if(sum == 0) {

                    result.push_back(
                        {arr[i], arr[left], arr[right]}
                    );

                    left++;
                    right--;

                    // Skip duplicates
                    while(left < right && arr[left] == arr[left-1])
                        left++;

                    while(left < right && arr[right] == arr[right+1])
                        right--;
                }

                else if(sum > 0)
                    right--;

                else
                    left++;
            }
        }

        return result;
    }
};