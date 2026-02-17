 TreeNode* SAtoBST(vector<int>& nums,int low,int high){
    if (low>high) return NULL;
    int mid = (high+low)/2;
    TreeNode* root= new TreeNode(nums[mid]);
    root->left = SAtoBST(nums,low,mid-1);
    root->right = SAtoBST(nums,mid+1,high);
    return root;
 }
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return SAtoBST(nums,0,nums.size()-1);
    }
};