class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(), strs.end()); 
        
        int n = strs.size();
        string s=strs[0]; 
        string s1=strs[n-1]; 
        string ans="";
        int i;
        for( i = 0; i < s.size(); i++) 
        {
            if(s[i] == s1[i]) 
                ans += s[i]; 
            else
                break; 
        }
        return ans; 
    }
};
