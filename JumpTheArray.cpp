#include <iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    //bool isTrue()
    bool canJump(vector<int>& nums) {
        if (nums.size() == 1)
            return true;
        int size = nums.size()-1, far=0;
        for (int i = 0; i < size; i++)
        {
            if (i>far)
                return false;
            far = max(far,i+nums[i]);
            if (far >= size )
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    Solution s1;
    vector<int>v1 = {0,2,3 };  // true //2,3,1,1,4   2,0,5,0  0,2,3    3,2,1,0,4
    bool ans=s1.canJump(v1);
    cout << ans;
}