#include<stdio.h>
#include<iostream>
#include<vector>
#include <unordered_map>
#include<algorithm>
#include <unordered_set>
using namespace std;
bool containsDuplicate(vector<int>& nums) 
{
	unordered_set<int>s1;
	unordered_set<int>::iterator it;
	bool isTrue = false;
	for (int i = 0; i < nums.size(); i++)
	{
		it=s1.find(nums[i]);
		if (it!=s1.end())
		{
			return true;
		}
		else
		{
			s1.insert(nums[i]);
		}
	}
	return isTrue;
}
int main()
{
	vector<int>v1 = { 1,2,3 };
	bool ans = containsDuplicate(v1);
	cout << ans;
}