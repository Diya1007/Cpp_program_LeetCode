#include <iostream>
#include<vector>
#include<climits>

using namespace std;
class RandomizedSet {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1;
        vector<int>pre;
        vector<int>suffix;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0)
            {
                pre.push_back( 1);
            }
            else
            {
                mul = mul * nums[i-1];
                pre.push_back( mul);
            }
        }
        mul = 1;
        for (int i = nums.size()-1; i >= 0; i--)
        {
            if (i == nums.size() - 1)
            {
                suffix.push_back( 1);
            }
            else
            {
                mul = mul * nums[i + 1];
                suffix.push_back(mul);
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            pre[i] = pre[i] * suffix[(suffix.size()-1)-i];
        }
        return pre;
    }
};
int main()
{
    RandomizedSet* obj = new RandomizedSet();
    vector<int>v1 = { 1,2,3,4 };
    vector<int>res=obj->productExceptSelf(v1);
    //Input: nums = [1,2,3,4]
    //Output: [24, 12, 8, 6]
}