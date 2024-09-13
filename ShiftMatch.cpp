#include<iostream>
using namespace std;

string shift(string s, int l)
{
	char c=s[0];
	for (int i = 0; i < l - 1; i++)
	{
		s[i] = s[i + 1];
	}
	s[l - 1] = c;
	return s;
}

void match(string s1, string s2, int l, int g1)
{
	if (s1 == s2)
	{
		cout << "true";
	}
	else
	{
		if (g1 < l)
		{
			s1 = shift(s1, l);
			g1++;
			match(s1, s2, l, g1);
		}
		else
			cout << "string rotated back to the original";
	}
}


int main()
{
	string s1, s2;
	char c;
	//s1 = "abcde";
	//s2 = "abced";
	string a, b;
	cin >> s1;
	cout << "now g ";
	cin >> s2;
	int l1 = s1.length();
	int l2 = s2.length();
	if (l1 != l2)
	{
		cout << "length not equal";
	}
	match(s1, s2, l1, 0);
}