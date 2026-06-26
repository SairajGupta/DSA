class Solution {
public:
    void firstocc(int low,int mid,int target ,vector<int>& nums,vector<int>& ans){
        int flow = low;
        int fhigh = mid;
        while(flow<=fhigh){
            int fmid = flow + (fhigh-flow)/2;
            if(target==nums[fmid]){
                if(nums[fmid-1]<nums[fmid]){
                    ans[0] = fmid;
                }
                else{
                    firstocc(flow,fmid,target,nums,ans);
                }
            }
            if(target<nums[fmid]){
                fhigh = fmid-1;
            }
            else{
                flow = fmid +1;
            }
        }
    }
    void lastocc(int high,int mid,int target,vector<int>& nums,vector<int>& ans){
        int flow = mid;
        int fhigh = high;
        while(flow<=fhigh){
            int fmid = flow + (fhigh-flow)/2;
            if(target==nums[fmid]){
                if(nums[fmid+1]>nums[fmid]){
                    ans[1] = fmid;
                }
                else{
                    lastocc(flow,fmid,target,nums,ans);
                }
            }
            if(target<nums[mid]){
                fhigh = fmid-1;
            }
            else{
                flow = fmid +1;
            }
        }
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        vector<int> ans = {-1,-1};
        while(low<=high){
            int mid = low + (high - low)/2;
            if(target==nums[mid]){
                if(nums[mid-1]<nums[mid]){
                    ans[0] = mid;
                }
                else{
                    firstocc(low,mid,target,nums,ans);
                }
                if(nums[mid+1]>nums[mid]){
                    ans[1] = mid;
                }
                else{
                    lastocc(high,mid,target,nums,ans);
                }
            }
            if(target<nums[mid]){
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        return ans;
    }
};