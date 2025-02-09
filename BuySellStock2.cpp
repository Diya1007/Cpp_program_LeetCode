#include <iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP = prices[0];
        int profit = 0,j=0;
        for (int i = 1; i < prices.size(); i++)
        {
            minP = min(prices[i], minP);
            if (prices[i] - minP)
            {
                profit = profit + max(j, prices[i] - minP);
                minP = prices[i];
            }
        }
        return profit;
    }
};
int main()
{
    Solution s1;
    vector<int>v1 = { 7,6,4,3,1 };
    int profit=s1.maxProfit(v1);
    cout << "profit :"<<profit;
}