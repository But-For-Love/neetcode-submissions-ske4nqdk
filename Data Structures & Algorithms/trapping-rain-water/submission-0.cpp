class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1, lm = 0, rm = 0, ans = 0;
        while(l<=r){
            lm = max(lm, height[l]);
            rm = max(rm, height[r]);
            if(height[l] < height[r]){
                ans += lm - height[l];
                ++l;
            }else{
                ans += rm - height[r];
                --r;
            }
        }
        return ans;
    }
};
