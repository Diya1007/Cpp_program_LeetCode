#include <iostream>
#include <string>
#include <set>
#include<vector>
#include<math.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
	
	int len = nums.size();
	for (int i = nums.size()-1; i >= 0; i--)
	{
		if (nums[i] == 0)
		{
			int temp = nums[i];
			int j = i + 1;
			int ind = i;
			while (j < len)
			{
				nums[ind] = nums[j];
				ind++;
				j++;
			}
			nums[j - 1] = temp;
			len--;
		}
	}
}
int main()
{
	vector<int>v1 = { 0 };
	moveZeroes(v1);
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i]<<" ";
	}
}