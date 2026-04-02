class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(auto& str:strs){
            int l = str.length();
            ans += to_string(l) + "#" + str;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int p = 0;
        while(p<s.length()){
            int found = s.find('#', p);
            int l = stoi(s.substr(p, found - p));
            p = found + 1;
            string sd ="";
            for(int i = p;i<p+l;++i){
                sd+=s[i];
            }
            ans.emplace_back(sd);
            p = p+l;
        }
        return ans;
    }
};