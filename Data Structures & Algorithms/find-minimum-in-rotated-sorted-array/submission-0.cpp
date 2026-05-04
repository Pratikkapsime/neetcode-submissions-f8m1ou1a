class Solution {
public:
    int findMin(vector<int> &nums) {
        int mini=1001;
        for(auto n:nums){
            mini=min(mini,n);
        }
        return mini;
    }
};
