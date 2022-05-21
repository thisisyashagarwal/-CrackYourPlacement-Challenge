class Solution {
public:
    bool canJump(vector<int>& nums) {
        int currMax=0;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            currMax = max(currMax, i+nums[i]);
            if(i==currMax && nums[i]==0){
                return false;
            }
        }
        return true;
    }
};
