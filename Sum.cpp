#include<iostream>
#include<vector>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
	int sum = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		sum= nums[i] = sum + nums[i];
	}
	return nums;
}
int main()
{
	vector<int>v1 = { 1,2,3,4 };
	vector<int>v2 = runningSum(v1);
	for (int i : v2)
	{
		cout << i<<" ";
	}
}