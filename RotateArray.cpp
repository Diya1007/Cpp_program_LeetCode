#include <iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=nums.size()%k;     //take care in case of k > size
        vector<int>v1(nums.end() - k, nums.end());
        v1.insert(v1.end(),nums.begin(),nums.end()-k);
        nums = v1;

        /*
          k = k % nums.size();
  reverse(nums.begin(), nums.end());
  reverse( nums.begin(), nums.begin()+k);
  reverse(nums.begin() + k , nums.end());
        */
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
