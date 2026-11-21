class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        // 提前预分配 2n 的空间，避免扩容开销
        ans.reserve(2 * n); 
        // 插入第一段
        ans.insert(ans.end(), nums.begin(), nums.end()); 
        // 插入第二段
        ans.insert(ans.end(), nums.begin(), nums.end()); 
        return ans;
    }
};