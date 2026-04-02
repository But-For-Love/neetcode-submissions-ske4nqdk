class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mmp;
        for(auto& str:strs){
            string sc = str;
            sort(sc.begin(),sc.end());
            mmp[sc].push_back(str);
        }
        for(auto p:mmp){
            ans.push_back(p.second);
        }
        return ans;
    }
};
