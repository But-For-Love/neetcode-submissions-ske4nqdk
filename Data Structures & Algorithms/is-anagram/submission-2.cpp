class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        for(auto& c:s){
            ++arr[c-'a'];
        }
        for(auto& c:t){
            --arr[c-'a'];
        }
        for(auto& op:arr){
            if(op){
                return false;
            }
        }
        return true;
    }
};
