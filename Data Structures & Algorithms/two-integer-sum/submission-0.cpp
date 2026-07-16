class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> temp;
        for(int i=0;i<nums.size();i++){
            int need = target-nums[i];
            if(temp.find(need)!=temp.end()) return {temp[need],i};
            temp[nums[i]]=i;
        }
        return {};
    }
};
