#include<iostream>
#include<vector>
#include<string>
#include <stack>
using namespace std;
bool isValid(string s) 
{
	/*
	int len = s.length();
	int count = 0;
	int i;
	if (len % 2 != 0)
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == ')' || s[i] == '}' || s[i] == ']')
			{
				return 0;
			}
			else if (s[i] == '(')
			{
				count++;
				for (int j = s.length() - 1; j >= 0; j--)
				{
					if (s[j] == ')')
					{
						s[j] = '0';
						count--;
						break;
					}
					else if (s[j] == '0')
					{
						break;
					}
				}
			}
			else if (s[i] == '{')
			{
				count++;
				for (int j = s.length() - 1; j >= 0; j--)
				{
					if (s[j] == '}' )
					{
						s[j] = '0';
						count--;
						break;
					}
					else if (s[j] == '0')
					{
						break;
					}
				}
			}

			else if (s[i] == '[')
			{
				count++;
				for (int j = s.length() - 1; j >=0 ; j--)
				{
					if (s[j] == ']')
					{
						s[j] = '0';
						count--;

						break;
					}
					else if (s[j] == '0')
					{
						break;
					}
				}
			}
		}
	}*/

	stack<int>st;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			st.push(s[i]);
		else
		{
			if (st.empty() ||
				s[i] == ')' && st.top() != '(' ||
				s[i] == '}' && st.top() != '{' ||
				s[i] == ']' && st.top() != '[')
				return 0;
			else
				st.pop();
		}
	}
	if (!st.empty())
		return 0;
	else
		return 1;
}
int main()
{
	//(([]){}) 
	string paran = "(([)])";
	bool ans=isValid(paran);
	cout << ans;
}