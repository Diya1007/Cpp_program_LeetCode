#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val)
{
	int count = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] != val)
		{
			nums[count] = nums[i];
			count++;
		}
	}
	nums.resize(count);
	return count;
}
int main()
{
	vector<int>v1 = { 0,1,2,2,3,2,0,4,2 };
	int n = 2;
	int len=removeElement(v1, n);
	cout << len;

}