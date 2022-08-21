//Given the array prices where prices[i] is the price of the ith item in a shop. There is a special discount for items in the shop, if you buy the ith item, then you will receive a discount equivalent to prices[j] where j is the minimum index such that j > i and prices[j] <= prices[i], otherwise, you will not receive any discount at all.

//Return an array where the ith element is the final price you will pay for the ith item of the shop considering the special discount

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> finalPrice = prices;
        int n = prices.size();
        for (int i = 0; i<n;i++)
        {
            int discount = 0;
            for (int j = i+1; j<n;j++)
            {
                if (prices[j]<=prices[i])
                {
                    discount = prices[j];
                    break;
                }
            }
            finalPrice[i] -= discount;
        }
        return finalPrice;
    }
};
