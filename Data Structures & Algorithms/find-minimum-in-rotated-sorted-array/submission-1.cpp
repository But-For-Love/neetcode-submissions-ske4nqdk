class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0,r=nums.size()-1;
        int res = nums[0];
        while(l<r){
            int m = l + (r-l)/2;
            if(nums[m] >= nums[l]){
                l = m + 1;
            }else{
                r = m;
            }
            res = min(res,nums[l]);
        }return res;
    }
};
