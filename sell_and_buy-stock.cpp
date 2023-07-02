class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max_profit = 0;

        for (int i = 0; i < prices.size() - 1; i++)
        {

            for (int j = i + 1; j < prices.size(); j++)
            {

                if (prices[j] > prices[i])
                {
                    int maxi = prices[j] - prices[i];
                    max_profit = max(maxi, max_profit);
                }
            }
        }
        return max_profit;
    }
};

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max_profit = 0;
        int min_price = INT_MAX;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < min_price)
            {
                min_price = prices[i];
            }

            else if (prices[i] - min_price > max_profit)
            {
                max_profit = prices[i] - min_price;
            }
        }
        return max_profit;
    }
};
