#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string findAndReplace(string s ,int Q, int index[], string sources[], string targets[]) {
        // code here
        string str = "";
        string s1;
        int i,j, p = 0;
        for( i =0; i<Q; i++)
        {
            for( j=p; j<s.length(); j++)
            {
                if( j == index[i] )
                {
                    int n = sources[i].length();
                    string r = s.substr(j, n);
                    // cout<<r<<" ";
                    if( r == sources[i])
                    {
                        str.append(targets[i]);
                        p = j+n;
                        j = p;
                    }
                    else
                    {
                        s1 = s[j];
                        str.append(s1);
                        p = j+1;
                        j = p;
                    }
                    // cout<<p<<" ";
                    break;
                }
                else
                {
                    s1 = s[j];
                    str.append(s1);
                }
                // cout<<str<<" \n";
            }
        }
        // cout<<j;
        if( j != s.length())
        {
            s1 = s.substr(j);
            // cout<<endl<<s1<<" ";
            str.append(s1);
        }
        return str;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        
        int Q;
        cin>>Q;
        int index[Q];
        string sources[Q], targets[Q];
        
        for(int i=0; i<Q; i++)
            cin>>index[i];
        for(int i=0; i<Q; i++)
            cin>>sources[i];
        for(int i=0; i<Q; i++)
            cin>>targets[i];

        Solution ob;
        cout<<ob.findAndReplace(S,Q,index,sources,targets)<<endl;
    }
    return 0;
}  // } Driver Code Ends
