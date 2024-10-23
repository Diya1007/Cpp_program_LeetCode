#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	set<int>s;
	for (int i = 0; i < nums1.size(); i++)
	{
		for (int j = 0; j < nums2.size(); j++)
		{
			if (nums1[i] == nums2[j])
			{
				s.insert(nums1[i]);
				break;
			}
		}
	}
	vector<int>v(s.begin(),s.end());
	
	return v;
}
int main()
{
	vector<int>v1 = { 1,2,2,1 };
	vector<int >v2 = { 2,2 };
	vector<int>res=intersection(v1, v2);
}