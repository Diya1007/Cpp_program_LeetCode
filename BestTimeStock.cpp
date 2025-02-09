#include <iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = INT_MAX;
        int profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            minPrice = min(prices[i], minPrice);
            profit = max(profit, prices[i] - minPrice);
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