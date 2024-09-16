#include<iostream>
#include<vector>
using namespace std;
void vec(std::vector<int>& v)
{
	std::vector<int>v3;
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = i + 1; j < v.size(); j++)
		{
			if (v[i] == v[j])
			{
				v3.push_back(v[i]);
			}
		}
	}
	for (int i = 0; i < v3.size(); i++)
	{
		cout << v3[i];
	}
}
int main()
{
	std::vector<int>v1 = { 1,2,3,0,2,3 };
	vec(v1);
	v1.clear();
}