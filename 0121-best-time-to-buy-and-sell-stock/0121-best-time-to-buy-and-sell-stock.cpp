class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int maxProfit = 0;

        while(right < prices.size())
        {
            int diff = prices[right] - prices[left];
            if(prices[right] > prices[left])
                maxProfit = diff > maxProfit ? diff : maxProfit;
            else
                left = right;

            right+=1;
        }

        return maxProfit;
    }
};