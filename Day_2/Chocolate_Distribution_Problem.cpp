#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort( a.begin(), a.end());

    long long  count = a[m-1] - a[0];
    int i;
    long long m1, m2;
    for( i=1; i<n-m+1; i++)
    {
        m1 = a[i];
        m2 = a[m +i -1];
    //    cout<< a[i]<<" "<<m2<<endl;
        count = min( count, m2-m1);
    }   
    return count;
    }
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends
