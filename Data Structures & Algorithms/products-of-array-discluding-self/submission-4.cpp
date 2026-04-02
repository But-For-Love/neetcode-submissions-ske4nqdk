class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans(len);
        vector<int> pre(len);pre[0]=1;
        vector<int> dif(len);dif[len-1]=1;
        for(int i=1;i<len;++i){
            pre[i] = pre[i-1] * nums[i-1];
        }
        for(int i=len-2;i>=0;--i){
            dif[i] = dif[i+1] * nums[i+1];
        }
        for(int i=0;i<len;++i){
            ans[i] = pre[i] * dif[i];
        }
        return ans;
    }
};
