class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(string s:strs){
            string temp = s;
            sort(s.begin(),s.end());
            mp[s].push_back(temp);
        }
        for(auto& vec:mp){
            ans.push_back(vec.second);
        }
        return ans;
    }
};
