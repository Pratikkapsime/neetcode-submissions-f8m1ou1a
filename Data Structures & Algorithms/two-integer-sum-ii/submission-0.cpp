class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int st=0,end=n-1;
        vector<int> ans(2);
        while(st<=end){
            if(nums[st]+nums[end]>target){
                end--;
            }
            else if(nums[st]+nums[end]<target){
                st++;
            }
            else{
                ans[0]=st+1;
                ans[1]=end+1;
                break;
            }
        }
        return ans;

    }
};
