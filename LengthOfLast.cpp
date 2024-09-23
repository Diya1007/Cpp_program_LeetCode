#include<iostream>
#include<vector>
#include<string>
#include <stack>
#include <unordered_set>
using namespace std;

string charTrue(string c)
{
	for (int i = c.size() - 1; i >= 0; i--)
	{
		int ascii = c[i];
		if ((65 <= ascii && ascii <= 90) || (97 <= ascii && ascii <= 122))
		{
			return c;
		}
		else
			c.pop_back();
	}
	return c;
}

int lengthOfLastWord(string s) 
{
	int len = s.size();
	//cout << len<<'\n';
	int count = 0;
	s= charTrue(s);
	//cout << s.size();
		for (int j = s.size()-1; j >= 0; j--)
		{
			if (s[j] != ' ')
			{
				count++;
			}
			else
				break;
		}
	
	return count;
}

int main()
{
	string s = "   fly me   to   the moon  ";
	int len = lengthOfLastWord(s);
	cout << len;
}