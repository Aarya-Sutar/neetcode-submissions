class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        int left = 1;
        ans[0]=1;
        for(int i=1;i<nums.size();i++){
            ans[i]=left*nums[i-1];
            left*=nums[i-1];
        }
        int right = 1;
        for(int j=nums.size()-1;j>=0;j--){
            ans[j]*=right;
            right*=nums[j];
        }
        return ans;
    }
};
