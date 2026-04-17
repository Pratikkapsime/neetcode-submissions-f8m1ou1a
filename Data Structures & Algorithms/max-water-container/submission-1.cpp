class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxArea = 0, i = 0, j = n - 1;
        while (i < j) {
            int curArea = (j - i) * min(heights[i], heights[j]);
            maxArea = max(maxArea, curArea);
            if (heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxArea;
    }
};
