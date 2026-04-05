class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> obj(nums.size());
        int tot=1;
        for(int i=0; i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j) continue;
                tot=tot*nums[j];
            }
            obj[i]=tot;
            tot=1;
        }
        return obj;
    }
};
