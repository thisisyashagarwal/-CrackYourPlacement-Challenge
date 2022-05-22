class Solution {
public:
    int strStr(string s, string str) {
        int n = s.length();
        int m = str.length();
        string r;
        for( int i=0; i<n; i++)
        {
            r = s.substr( i, m);
            if( r == str)
                return i;
        }
        return -1;
    }
};
