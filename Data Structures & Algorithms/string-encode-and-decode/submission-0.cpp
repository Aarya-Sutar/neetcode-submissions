class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for(string s:strs) encoded_string+=to_string(s.size())+'#'+s;
        return encoded_string;        
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#') j++;
            int len = stoi(s.substr(i,j-i));
            string substr = s.substr(j+1,len);
            res.push_back(substr);
            i=j+1+len;
        }
        return res;
    }
};
