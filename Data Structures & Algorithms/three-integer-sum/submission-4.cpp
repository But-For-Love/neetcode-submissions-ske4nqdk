class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int i = 0;
        while (i<len-2) {
            if(nums[i]>0)break;
            int target = 0 - nums[i];
            int j = i + 1, k = len - 1;
            while(j < k){
                int sum = nums[j] + nums[k];
                if(sum > target){
                    --k;
                }else if(sum < target){
                    ++j;
                }else{
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while(j < k && nums[k] == nums[k-1]) --k;
                    while(j < k && nums[j] == nums[j+1]) ++j;
                    --k;
                    ++j;
                }
            }
            while(i + 1 < len - 2 && nums[i+1]==nums[i])++i;
            ++i;
        }
        return ans;
    }
};