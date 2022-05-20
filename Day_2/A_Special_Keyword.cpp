//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findTime(string S1, string S2) {
        // code here
        int i,j,ans = 0, n = 26;
        int m1 = S2.length();
        map<char, int>m;
        for( i=0; i<n; i++)
        {
            m[S1[i]] = i;
        }
        j = 0;
        for( i=0; i<m1; i++)
        {
            if( m.find(S2[i])!= m.end())
            {
                ans += abs( j - m[S2[i]]);
                j = m[S2[i]];
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1,S2;
        cin>>S1;
        cin>>S2;

        Solution ob;
        cout<<ob.findTime(S1,S2)<<endl;
    }
    return 0;
}  // } Driver Code Ends
