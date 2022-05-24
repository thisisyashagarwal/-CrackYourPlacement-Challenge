class Solution {
public:
    
    int cal( vector<int>v, int idx)
    {
        if( v.size() == 0)
            return 0;
        if( v.size() == 1)
            return v[0];
        int ans = v[0] ^ v[1];
        for( int i=2; i<v.size(); i++)
        {
            ans = (ans ^ v[i]);
        }
        return ans;
    }
    
    void print(int idx, vector<int> &v, vector<int>arr, int n, int &sum )
    {
        if( idx == n)
        {
            sum += cal( v, idx);
            return;
        }
        
        v.push_back(arr[idx]);
        print( idx+1, v, arr, n, sum);
        v.pop_back();
        print( idx+1, v, arr, n, sum);
    }
    
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        int sum = 0;
        print( 0, v, nums, n, sum);
        return sum;
    }
};
