#include<stdio.h>
#include<iostream>
#include<vector>
#include <unordered_map>
#include<algorithm>
#include <unordered_set>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k) 
{
	unordered_map<int,int>m1;
	bool istrue = false;
	for (int i = 0; i < nums.size(); i++)
	{
		if (m1.find(nums[i]) != m1.end())
		{
			int g = m1[nums[i]];
			if (abs(i - m1[nums[i]]) <= k)
			{
				istrue=true;
			}
			else
			{
				m1[nums[i]] = i;
			}
		}
		else
			m1[nums[i]]=i;
	}
	return istrue;
}
int main()
{
	int i = 1;
	vector<int>v1 = { 1,0,1,1 };
	bool ans=containsNearbyDuplicate(v1,i);
	cout << ans;
}