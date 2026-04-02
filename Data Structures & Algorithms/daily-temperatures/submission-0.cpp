class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int l = temperatures.size();
        vector<int> ans(l, 0);
        stack<int> stk;
        for(int i = 0;i<l;++i){
            int curr = temperatures[i];
            while(!stk.empty() && temperatures[stk.top()] < curr) {
                int p = stk.top();
                stk.pop();
                ans[p] = i-p;
            }
            stk.push(i);
        }
        return ans;
    }
};
