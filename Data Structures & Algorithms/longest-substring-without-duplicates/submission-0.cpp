class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int>mp;
            for(int j=i;j<n;j++){
                if(mp.find(s[j])!=mp.end()){
                    break;
                }
                ans=max(ans,j-i+1);
                mp[s[j]]=1;
            }
        }
        return ans;
    }
};
