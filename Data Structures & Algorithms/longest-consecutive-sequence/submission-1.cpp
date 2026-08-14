class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set<int> seen;
        for(int num:nums) seen.insert(num);
        for(int num:seen){
            int len = 1;
            int curr = num;
            if(!seen.contains(curr-1)){
                while(seen.contains(curr+1)){
                    len++;
                    curr++;
                }                
            }
            longest = max(len,longest);
        }
        return longest;
    }
};
