class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (auto s : strs) {
            vector<int> cnt(26,0);
            for (auto c : s) {
                cnt[c - 'a']++;
            }
            string key;
            for(int i=0;i<26;i++){
                key+=char(cnt[i]);
            }
            mp[key].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto v : mp) {
            ans.push_back(v.second);
        }
        return ans;
    }
};
