#include<iostream>
#include<vector>
#include<set>
#include<map>
#include <unordered_map>
#include<algorithm>
using namespace std;

static bool value_comparator(pair<int, int>& a, pair<int, int>& b)
{
	return a.second < b.second;
}

int sum(unordered_map<int, int>m1,int x)
{
	int sum = 0;
	vector<pair<int, int>> v(m1.begin(), m1.end());
	int len = v.size() - 1;
	sort(v.begin(), v.end(), value_comparator);
	for (int i = v.size()-1; i > len-x; i--)
	{
		for (int j = 0; j < v[i].second; j++)
		{
			sum += v[i].first;
		}
	}
	return sum;
}

vector<int> findXSum(vector<int>& nums, int k, int x) {
	unordered_map<int, int>m1;
	vector<int>v(nums.size() - k+1);
	int len = 0; 
	for (int i = 0; i < nums.size() - 1; i++)
	{
		if (len <= nums.size() - k)
		{
			for (int j = i; j < i + k; j++)
			{
				m1[nums[j]]++;
			}

			v[len] = (sum(m1, x));
			m1.clear();
			len++;
		}
		else
			break;
	}
	return v;
}
int main()
{
	vector<int>v1 = { 1,1,2,2,3,4,2,3 };
	int k = 6, x = 2;
	vector<int>res = findXSum(v1, k, x);
	for (int num : res)
	{
		cout << num<<" ";
	}
}