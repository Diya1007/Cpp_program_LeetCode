#include<iostream>
#include<vector>
using namespace std;
string reverseVowels(string s)
{
	vector<char>v1;
	int index = 0;
	for (int i = s.size()-1; i >= 0; i--)
	{
		if (s[i] == 'A' || s[i] == 'a' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
		{
			v1.insert(v1.begin()+index, s[i]);
			index++;
		}
	}

	index = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A' || s[i] == 'a' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
		{
			s[i] = v1[index];
			index++;
		}
	}
	return s;
}
int main()
{
	string v1 = { "leetcode" };
	string s=reverseVowels(v1);
	cout << s;
}