class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto& n:nums){
            st.insert(n);
        }
        int ans=0;
        for(auto& n:nums){
            int ctr = 0;
            while(st.count(n)){
                ++ctr;
                ++n;
            }
            ans = max(ans,ctr);
        }
        return ans;
    }
};
