class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int , int>> arr;
        for(int i =0;i<profits.size(); i++){
            arr.push_back({capital[i], profits[i]});
        }

        sort(arr.begin(), arr.end());

        priority_queue<int>pq;
        int idx = 0;
        int pro = 0;
        int n = arr.size();
        for(int i = 0; i<k ; i++){
            while(idx < n){
                if(arr[idx].first > w){
                    break;
                }

                pq.push(arr[idx].second);
                idx++;
            }
            if(pq.empty()) break;

            pro = pq.top();
            pq.pop();
            w += pro;

        }

        return w;
    }
};