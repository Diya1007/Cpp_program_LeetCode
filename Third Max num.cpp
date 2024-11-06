#include<iostream>
#include<vector>
#include<algorithm>
#include <set>
using namespace std;
int thirdMax(vector<int>& nums) {
	int len=0;
	set<int>n1(nums.begin(), nums.end());
	nums.clear();
	auto first = n1.begin();
	for (int i : n1)
	{
		nums.insert(nums.begin()+len,*first);
		first++;
		len++;
	}
	sort(nums.begin(), nums.end(), std::greater<int>());
	if (nums.size() >= 3)
	{
		return nums[2];
	}
	else
		return nums[0];
	
}
int main()
{
	vector<int>v1 = { 2,2,3,1 };
	int num = thirdMax(v1);
	cout << num;
}