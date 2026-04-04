class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while (l<=r){
            int m = (r-l)/2 + l;
            int n = nums[m];
            if (n == target) {
                return m;
            }else{
                n>target ? r = m-1 : l = m+1;
            }
        }
        return -1;
    }
};
