#include <iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int size = nums.size() - 1, far=0,turn=0;
        for (int i = 0; i < size; i++)
        {
            if (i > far)
                return false;
            if (nums[i] + i > far)
            {
                turn++;
                far = nums[i] + i;
                i = far;
            }
            if (far >= size)
            {
                break;
            }
        }
        return turn-1;
    }
};
int main()
{
    Solution s1;
    vector<int>v1 = { 7,0,9,6,9,6,1,7,9,0,1,2,9,0,3 }; //{ 2,3,1,1,4 };   // true //2,3,1,1,4   2,0,5,0  0,2,3    3,2,1,0,4
    int ans=s1.jump(v1);
    cout << ans;
}