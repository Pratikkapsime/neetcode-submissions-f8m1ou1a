class Solution {
   public:
    int trap(vector<int>& h) {
        int n = h.size();
        vector<int> preMax(n);
        preMax[0] = h[0];
        vector<int> sufMax(n);
        sufMax[n - 1] = h[n - 1];
        for (int i = 1; i < n; i++) {
            preMax[i] = max(preMax[i - 1], h[i]);
        }
        for (int i = n - 2; i > 0; i--) {
            sufMax[i] = max(sufMax[i + 1], h[i]);
        }
        int tot = 0;
        for (int i = 0; i < n; i++) {
            if (h[i] < preMax[i] && h[i] < sufMax[i]) {
                tot += min(preMax[i], sufMax[i]) - h[i];
            }
        }
        return tot;
    }
};
