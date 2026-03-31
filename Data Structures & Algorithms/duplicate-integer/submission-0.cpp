class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto v:nums){
            if(mp[v]!=0) return true;
            mp[v]++;
        }
        return false;
    }
};