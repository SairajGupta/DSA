class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int tr=0;
        int ilow=0;
        int ihigh=matrix.size()-1;
        int col=matrix[0].size();
        while(ilow<=ihigh){
            int imid=ilow+(ihigh-ilow)/2;
            if (target >= matrix[imid][0] && target <= matrix[imid][col - 1]) {
                tr = imid;
                break;
            }
            if(target< matrix[imid][0]){
                ihigh=imid-1;
            }
            else{
                ilow=imid+1;
            }
        }
        if (!(target >= matrix[tr][0] && target <= matrix[tr][col - 1]))
            return false;
        
        int low=0;
        int high=matrix[tr].size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(target==matrix[tr][mid]) return true;
            if(target<matrix[tr][mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};