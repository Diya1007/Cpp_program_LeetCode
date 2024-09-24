#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) 
{
	int len = nums.size()-1;
	for (int i = 0; i <= len; )
	{
		int key = nums[i];
		for(int j=i+1;j<=len;j++)
		if (nums[j]<key)
		{
			key = nums[j];
			nums[j] = nums[i];
			nums[i] = key;
		}
		/*else if (nums[j] == key)
		{
			i = i + 1;
			nums[j] = nums[i];
			nums[i] = key;
		}*/
		i++;
	}
}
int main()
{
	vector<int>a = { 2,0,1 };
	sortColors(a);
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
}