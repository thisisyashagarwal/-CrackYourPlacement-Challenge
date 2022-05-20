class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max1 = 0, temp = prices[0],i,j;
        for( i=0; i<n; i++)
        {
            max1 = max( max1, prices[i] - temp);
            if( prices[i] < temp)
                temp = prices[i];
        }
        return max1;
    }
};
