#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> summaryRanges(vector<int>& nums)
{
	int start = 0, end = 0,k=0;
	vector<	string >s1;
	for (int i = 0; i < nums.size(); i++)
	{
		if (i==nums.size()-1 || nums[i] + 1 != nums[i + 1])
		{
			s1.push_back(to_string(nums[start])+"->"+to_string(nums[i]));
			start = i + 1;
		}

	}
	return s1;
}
int main()
{	vector<int>v1 = { 0,1,2,4,5,7 };
	vector<string>v2=summaryRanges(v1);
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i]<<'\n';
	}
}