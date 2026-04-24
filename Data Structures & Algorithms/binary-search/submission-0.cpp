class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int lo=0,hi=nums.size()-1, mid=0,ans=-1;
        while(lo<=hi){
            mid=(hi+lo)/2;
            if(nums[mid]==tar){
                ans = mid;
                break;
            }
            else if(nums[mid]>tar){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};
