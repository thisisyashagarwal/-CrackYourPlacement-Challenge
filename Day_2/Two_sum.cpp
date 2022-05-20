class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,n;
        vector<int>a;
        n = nums.size();
        for( i = 0; i < n; i++)
        {
            for( j = i+1; j < n; j++)
            {
                if( nums[i] + nums[j] == target)
                {
                   // cout<<"["<<i<<"'"<<j<<"]"<<endl;
                    a.push_back(i);
                    a.push_back(j);
                    break;
                }
            }
        }
        return a;
    }
};
