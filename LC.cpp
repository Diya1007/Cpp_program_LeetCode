#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target)
{
	int n = nums.size();
	int end = n - 1;
	int start = 0, mid;

	/**************** WITH LOOP************************/
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		if (nums[mid] == target)
		{
			return mid;
		}
		else
		{
			if (nums[mid] > target)
			{
				end = mid - 1;
			}
			else
			{
				start = mid + 1;
			}

			/************************* Using Recursion **********************************
			int size = nums.size();
			int mid = (start + end) / 2;
			if (target > nums.back())
			{
				return size;

			}
			else if (target < nums.front())
			{
				return 0;
			}
			else if (nums[mid] == target)
			{
				return mid;
			}
			else if(start<end)
			{
				if (nums[mid] > target)
				{
					return searchInsert(nums, target, start, mid - 1);

				}
				else
				{
					return searchInsert(nums, target, mid + 1, end);
				}
			}
			*/
		}
	}
	return start;
}
int main() 
{
	vector<int>v1 = { 1,3,5,7 };
	int size = v1.size();
	int n=searchInsert(v1,2);
	cout << n;
	cin >> n;
}