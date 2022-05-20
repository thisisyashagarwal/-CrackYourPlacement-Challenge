class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int,int>m;
        int i=0;
        for( ;i<n; i++)
            m[nums[i]]++;
        
        map<int,int>::iterator itr;
        vector<int>v;
        for(itr = m.begin(); itr!= m.end(); itr++)
        {
            if( itr->second > 1)
                v.push_back(itr->first);
        }
        return v;
    }
};
