class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = 0, r = n*m-1;
        while(l<=r){
            int mid = (r-l)/2 + l;
            int midi = mid/m, midj = mid%m;
            int midv = matrix[midi][midj];
            if(midv == target){
                return true;
            }else{
                midv>target ? r = mid-1 : l = mid+1;
            }
        }
        return false;
    }
};
