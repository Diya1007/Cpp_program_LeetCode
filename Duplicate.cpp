#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums)
{
	int c = 1;
	for (int i = 1; i < nums.size(); i++)
	{

		if (nums[i] != nums[i-1])
		{
			nums[c]= nums[i];
			c++;
		}	
	}
	nums.resize(c);
	return c;
}
int main()
{
	vector<int>v1;
	int num;
	char ans;
	cout << "Enter into vector:\n";
	do
	{
		cin >> num;
		v1.push_back(num);
		cout << "enter more elements? y/n: ";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
	int len = removeDuplicates(v1);
	cout << "length after removing duplicates: "<<len;
}