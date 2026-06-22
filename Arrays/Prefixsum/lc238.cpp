class Solution {
public:
    vector<int> ans;
    vector<int> pp;
    vector<int> sp;
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        ans.resize(n);
        pp.resize(n);
        sp.resize(n);
        pp[0]=nums[0];
        sp[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            pp[i]=pp[i-1]*nums[i];
        }
        for(int i=n-2;i>0;i--){
            sp[i]=nums[i]*sp[i+1];
        }
        for(int i=1;i<n-1;i++){
            ans[i]=pp[i-1]*sp[i+1];
        }
        ans[0]=sp[1];
        ans[n-1]=pp[n-2];
        return ans;
    }
};