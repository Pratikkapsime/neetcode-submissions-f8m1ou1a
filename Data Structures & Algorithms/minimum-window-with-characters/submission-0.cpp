class Solution {
   public:
    string minWindow(string s, string t) {
        int n = s.size(), m = t.size();
        int l = 0, r = 0, sInd = -1, minLen = 10001, cnt = 0;
        vector<int> hash(256,0);
        for (auto c : t) {
            hash[c]++;
        }
        while (r < n) {
            if (hash[s[r]] > 0) {
                cnt++;
            }
            hash[s[r]]--;
            while (cnt == m) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    sInd = l;
                }
                hash[s[l]]++;
                if (hash[s[l]] > 0) cnt--;
                l++;
            }
            r++;
        }
        return sInd == -1 ? "" : s.substr(sInd, minLen);
    }
};
