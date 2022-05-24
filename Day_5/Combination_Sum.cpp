class Solution {
public:
    void print(int idx, vector<int> &v, vector<int>arr, int n, vector<vector<int>>&v1, int sum)
    {
        if( idx == n)
        {
            if( sum == 0)
                v1.push_back(v);
            return;
        }
        
        if( arr[idx] <= sum)
        {
            v.push_back(arr[idx]);
            print( idx, v, arr, n, v1, sum-arr[idx]);
            
            v.pop_back();
        }
        
        print( idx+1, v, arr, n, v1, sum);        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int>v;
        vector<vector<int>>v1;
        print( 0, v, candidates, n, v1, target);
        
        return v1;    
    }
};
