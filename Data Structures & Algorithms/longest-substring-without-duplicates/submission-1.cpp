class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0, l = 0;
        vector<int> hash(255, -1);
        for (int r = 0; r < n; r++) {
            // repeating char, in this curr window
            if (hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }
            ans = max(ans, r - l + 1);
            hash[s[r]] = r;
        }
        return ans;
    }
};
