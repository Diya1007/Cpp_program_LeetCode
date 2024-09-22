#include<iostream>
#include<vector>
#include<string>
#include <stack>
#include <unordered_set>
using namespace std;

bool reportSpam(vector<string>& message, vector<string>& bannedWords)
{
	/******* without using hash*****
	int len1 = message.size()-1;
	int len2 = bannedWords.size();
	vector<string>um;
	vector<string>ub;
	string s;
	int count = 0;

	for (int i = 0; i < bannedWords.size(); i++)
	{
		for (int j = bannedWords.size() - 1; j > i; j--)
		{
			if (bannedWords[i] == bannedWords[j])
			{
				bannedWords.erase(bannedWords.begin() + i);
			}
		}
	}

	if (len2 < 2)
		return 0;
	else
	{
		for (int i = 0; i < message.size(); i++)
		{
			s += message[i]+" ";
		}
	}
	
	for (int i = 0; i < message.size(); i++)
	{
		for (int j = 0; j < bannedWords.size(); j++)
		{
			if (message[i]==bannedWords[j] )
			{
				count++;
			}
			else
				continue;
		}
	}
	if (count >= 2)
	{
		return 1;
	}
	else
	return 0;*/
	int count = 0;
	unordered_set<string>s1;
	for(int i=0;i<bannedWords.size();i++)
		s1.insert(bannedWords[i]);
	for (int i = 0; i < message.size(); i++)
	{
		if (s1.count(message[i]) > 0)
		{
			count++;
		}
		if (count >= 2)
		{
			return 1;
		}
	}
		return 0;
}
int main()
{
	vector<string>v1 = { "s","a","aj","ps","h","ou","e","i","x","a"};
	vector<string>b1 = { "j","a","b","fa","z","a","no","ih","nq" };

	//vector<string>v1 = { "hello","world","leetcode" };
	//vector<string>b1 = { "world","hell"};
	bool ans = reportSpam(v1, b1);
	cout << ans;
}