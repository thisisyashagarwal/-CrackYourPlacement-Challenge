class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        int i,j,k = 0, p = 0,count = 0;
        for( i = 0 ; i < n; i++)
        {
            if(nums[i] != -102)
            {
                for(j=i+1; j<n; j++)
                {
                    if(nums[i] == nums[j])
                    {
                        nums[j] = -102;
                        count++;
                }
            }
        }
        count = n - count;
        for( i=0; i<n; i++)
        {
            if(nums[i] == -102 && p < count)
            {
                for( j=i+1; j<n; j++)
                {
                    if(nums[j] != -102)
                    {
                        nums[i] = nums[j];
                        nums[j] = -102;
                        p++;
                        break;
                    }
                }
            }
        }
  //      cout<<count;
        return count;
    }
};
