class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for (int i = n / 2; i >= 1; i--) {
            if (n % i == 0) {
                int nums = n / i;
                string sub = s.substr(0, i);
                string str = "";
                for (int j = 0; j < nums; j++) {
                    str += sub;
                }
                
                if (str == s) return true;
            }
        }
        return false;
    }
};
