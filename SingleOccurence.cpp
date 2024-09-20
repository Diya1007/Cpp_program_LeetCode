#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) 
{
	int i = 0;
	int num=0;
	while (i < nums.size())
	{
		num = num ^ nums[i];
		i++;
	}
	return num;
}
int main()
{
	vector<int>v1 = { 1,0,1 };
	int num = singleNumber(v1);
	cout << num;
}