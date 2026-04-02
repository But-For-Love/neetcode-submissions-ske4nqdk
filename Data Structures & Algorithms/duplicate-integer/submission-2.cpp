class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set mst(nums.begin(),nums.end());
        return mst.size() != nums.size();
    }
};