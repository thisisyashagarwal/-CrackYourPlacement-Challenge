class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,n;
        vector<int>a(2);
        n = nums.size();
        for( i = 0; i < n; i++)
        {
            for( j = i+1; j < n; j++)
            {
                if( nums[i] + nums[j] == target)
                {
                   // cout<<"["<<i<<"'"<<j<<"]"<<endl;
                    a[0] = i;
                    a[1] = j;
                    break;
                }
            }
        }
        return a;
    }
};
