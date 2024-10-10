#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int missingNumber(vector<int>& nums) 
{
	int len = nums.size();
	int sum = (len * (len + 1)) / 2;
	int sum2=0;
	for (int i = 0; i < nums.size(); i++)
	{
		sum2 += nums[i];
	}
	return sum - sum2;
}
int main()
{
	vector<int>v1 = { 1 };
	int num=missingNumber(v1);
	cout << num;
}