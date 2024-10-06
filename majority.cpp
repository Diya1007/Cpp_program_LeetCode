#include<stdio.h>
#include<iostream>

#include<vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) 
{

	unordered_map<int, int>m;
	int max;
	int size= nums.size() / 2;
	for (int i = 0; i < nums.size(); i++)
	{
		m[nums[i]]++;
	}
	for (int i = 0; i < nums.size(); i++)
	{
		if (size < m[nums[i]])
			return nums[i];
		
	}
	throw runtime_error("no element occurence bigger than n/2 found");
}
int main()
{
	vector<int>n1 = { -1,1,1,1,2,1 };
	int n = majorityElement(n1);
	cout << n;
}