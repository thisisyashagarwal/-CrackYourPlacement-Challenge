class Solution {
public:
    
    void print(int idx, vector<int> &v, vector<int>arr, int n, vector<vector<int>>&v1, int sum)
    {
        if( sum == 0)
        {
            v1.push_back(v);
            return;
        }
        
        for( int i= idx; i<n; i++)
        {
            if( i > idx && arr[i] == arr[i-1])
                continue;
            if( (arr[i]) > sum)
                break;
            v.push_back(arr[i]);
            print( i+1, v, arr, n, v1, sum- arr[i]);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        sort( candidates.begin(), candidates.end());
        vector<int>v;
        vector<vector<int>>v1;
        print( 0, v, candidates, n, v1, target);
    
        return v1;
    }
};
