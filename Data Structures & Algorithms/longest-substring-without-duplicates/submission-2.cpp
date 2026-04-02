class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[256] = {};
        int ans = 0;
        int l = 0, r = 0;
        while(r<s.length()){
            char ch = s[r];
            if(arr[ch]){
                while(arr[ch]){
                    arr[s[l]]=0;
                    ++l;
                }
            }
            ++arr[ch];            
            ans = max(ans, r-l+1);
            ++r;
        }
        return ans;
    }
};
