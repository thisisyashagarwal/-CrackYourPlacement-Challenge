//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int n,vector<int> arr){
        //code here
        int i,j,p = INT_MAX;
        vector<int>v;
        for( i=0; i<n; i++)
        {
            int flag = 0;
            // if( arr[i] < p)
            {    
                for( j=n-1; j>i; j--)
                {
                    if( arr[j] < arr[i])
                    {
                        flag = 1;
                        v.push_back(j);
                        break;
                    }
                }
            }
            if( flag == 0)
            {
                v.push_back(-1);
                p = i;
            }
        }
        return v;
    }
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends
