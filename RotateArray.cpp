#include <iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i = 0;
        vector<int>v1(nums.end() - k, nums.end());
        v1.insert(v1.end(),nums.begin(),nums.end()-k);
        nums = v1;
 }
};
int main()
{
    Solution s1;
    vector<int>v1 = { -1 };  // 5,6,7,1,2,3,4
    int k;
    cout << "enter value of k: ";
    cin >> k;
    s1.rotate(v1, k);
    for (int val : v1)
    {
        cout << val << " ";
    }
}