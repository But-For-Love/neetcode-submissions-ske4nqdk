class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; ++i) {
            int curr = nums[i];
            if (curr > 0)
                break;
            int target = 0 - curr;
            int left = i + 1, right = nums.size() - 1;
            while(left < right){
                int two_sum = nums[left] + nums[right];
                if(two_sum > target){
                    right--;
                }else if(two_sum < target){
                    left++;
                }else{
                    int _2 = nums[left];
                    int _3 = nums[right];
                    res.push_back({curr, _2 , _3});
                    while(left < right && _2 == nums[left]){
                        left++;
                    }
                    while(left < right && _3 == nums[right]){
                        right--;
                    }
                }
            }
            while(i < nums.size() - 2 && curr == nums[i+1]){
                i++;
            }
        }

        return res;
    }
};