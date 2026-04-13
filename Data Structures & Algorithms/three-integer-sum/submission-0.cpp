class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        if (n < 3)
            return {};
        if (nums[0] > 0)
            return {};

        vector<vector<int>> ans;

        for (int i = 0; i < n - 2; i++) {
            if (nums[i] > 0)
                break;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int lo = i + 1, hi = n - 1;
            while (lo < hi) {
                int tar = nums[i] + nums[lo] + nums[hi];
                if (tar == 0) {
                    ans.push_back({nums[i], nums[lo], nums[hi]});
                    lo++;
                    hi--;
                    while (lo < hi && nums[lo] == nums[lo - 1])
                        lo++;
                } else if (tar < 0)
                    lo++;
                else {
                    hi--;
                }
            }
        }
        return ans;
    }
};
