class Solution {
public:
    int maxArea(vector<int>& heights) {
        int len = heights.size();
        int left = 0, right = len - 1;
        int ans = 0;
        while(left < right){
            int l = right - left;
            if(heights[left] >= heights[right]){
                ans = max(ans, heights[right]*l);
                --right;
            }
            else{
                ans = max(ans, heights[left]*l);
                ++left;
            }
        }
        return ans;
    }
};