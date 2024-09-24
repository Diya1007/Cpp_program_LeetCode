#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;
int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2)
{
	unordered_set<int>Intersection;
	unordered_set<int>s;
	unordered_set<int>s2;
	int len1 = arr1.size() - 1;
	int len2 = arr2.size() - 1;
	int max = 0;
	for (int i = 0; i <= len1; i++)
	{
		int num = arr1[i];
		s.insert(num);
		while (num >= 10)
		{
			num = num / 10;
			s.insert(num);
		}
	}

	for (int j = 0; j <= len2; j++)
	{
		int num = arr2[j];
		s2.insert(num);
		while (num >= 10)
		{
			num = num / 10;
			s2.insert(num);
		}
	}
	int len = 0;
	for (const auto& element : s)
	{
		if (s2.count(element))
		{
			int x = element;
			while (x / 10 >= 1)
			{
				len++;
				x /= 10;
			}
			len += 1;											//single digit element 
			Intersection.insert(len);
			len = 0;
		}
	}
	int key=0;
	vector<int>comp(Intersection.begin(), Intersection.end());
	if (comp.size() == 1)
	{
		return key + 1;
	}
	else if(comp.size()>1)
	{
		for (int i = 0; i < comp.size() - 1; i++)
		{
			if (comp[i] > comp[i + 1] && key < comp[i])
			{
				key = comp[i];
			}
			else if (comp[i] < comp[i + 1] && key < comp[i + 1])
			{
				key = comp[i + 1];
			}

		}
	}

	/*for (auto it = Intersection.begin(); it != Intersection.end(); it++)
	{
		cout << *it<<" ";
	}*/
	return key;
}
int main()
{
	vector<int>v1 = {1,2,3};
	vector<int>v2 = { 4,4,4 };
	int len=longestCommonPrefix(v1, v2);
	cout << len;
}