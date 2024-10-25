#include<iostream>
#include<vector>
#include<set>
#include<map>
#include <unordered_map>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	vector<int>v;
	unordered_map<int, int>m1;
	unordered_map<int, int>m2;
	for (int n : nums1)
	{
		m1[n]++;
	}
	for (int n : nums2)
	{
		if (m1[n]>0)
		{
			v.push_back(n);
			m1[n]--;
		}
	}
	return v;
}
int main()
{
	vector<int>v1 = { 1,2,2,1 };
	vector<int >v2 = { 2,2 };
	vector<int>res=intersection(v1, v2);
	for (int n : res)
	{
		cout << res[n];
	}
}