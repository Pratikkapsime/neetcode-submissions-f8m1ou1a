class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(auto n:nums){
            mp[n]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto v:mp){
            pq.push({v.second,v.first});
        }
        vector<int> ans;
        while(!pq.empty() && k){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};
