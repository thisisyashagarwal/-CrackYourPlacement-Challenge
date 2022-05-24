class Solution {
public:
    void print(int idx, vector<int> &v, vector<int>arr, int n, vector<vector<int>>&v1)
    {
        if( idx == n)
        {
            v1.push_back(v);
            return;
        }
        
        v.push_back(arr[idx]);
        print( idx+1, v, arr, n, v1);
        v.pop_back();
        print( idx+1, v, arr, n, v1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        vector<vector<int>>v1;
        print( 0, v, nums, n, v1);
        return v1;
    }
};
