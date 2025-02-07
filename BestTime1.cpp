#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        for (int i = 0; i < prices.size(); i++)
        {
            min = prices[i];
            for (int j = i + 1; j < prices.size(); j++)
            {
                if (prices[j] > min && prices[j]-min>max)
                {
                    max = prices[j] - min;
                }
            }
        }
        if (max == 0)
            return 0;
        return max;
    }
private:
    int max=0, min,index=0;
};
int main()
{
    Solution s1;
    vector<int>v1 = { 7,6,4,3,1 };
    int profit=s1.maxProfit(v1);
    cout << "profit :"<<profit;
}