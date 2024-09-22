#include<iostream>
#include<vector>
#include<string>
#include <stack>
using namespace std;
bool isValid(string s) 
{
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
