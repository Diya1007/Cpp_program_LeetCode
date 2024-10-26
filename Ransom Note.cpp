#include<iostream>
#include<vector>
#include<set>
#include<map>
#include <unordered_map>
#include<algorithm>
#include <unordered_set>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
	vector<char>v2;
	unordered_map<char, int>m1;
	bool ans = true;
	for (char s : magazine)
	{
		m1[s]++;
	}
	
	for (char s : ransomNote)
	{
		v2.push_back(s);
	}
	auto it = m1.begin();
	sort(v2.begin(), v2.end());
	for (int i = 0; i < v2.size(); i++)
	{
		if (m1[v2[i]] > 0)
		{
			m1[v2[i]]--;
		}
		else
			ans = false;
	}
	return ans;
}
int main()
{
	string s1 = "aab";
	string s2 = "baa";
	bool res=canConstruct(s1, s2);
	cout << res;
}