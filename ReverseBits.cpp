#include<iostream>
#include<vector>
#include<string>
using namespace std;

/*
int isPalindrome(string s1, string s2)
{
	string temp = s2 + s1;
	int size = temp.length()-1;
	for (int i = 0; i<=size; i++)
	{
		if (temp[i] == temp[size - i])
		{
			continue;
		}
		else
		{
			return 0;
		}
	}
}
string shortestPalindrome(string s)
{
	int size = s.length();
	string temp ;
	int i, j,count=0;
	for (i = 0, j = size - 1; i < size && j >= 0;)
	{
		if (s[i] == s[j])
		{
			i++;
			j--;
		}
		else
		{
			temp.insert(temp.begin(),s[j]);
			count++;
			j--;
		}
	}
	if (isPalindrome(s,temp))
	{
		return temp + s;
	}
	else
	{
		reverse(temp.begin(), temp.end());
		return temp + s;
	}
	
}
int main()
{
	string s = "adcba";
	s=shortestPalindrome(s);
	cout << s;
}
*/

uint32_t reverseBits(uint32_t n)
{
	uint32_t temp = 1,t=n;
	uint32_t no = 0;
	for (int i = 31; i >=0; i--)
	{
		
		if (t>>1 & 1)
		{
			no = no | 1<<i;
		}
		n = n >> 1;
	}
	cout << no;
	return no;
}

int main()
{
	vector<uint32_t>v1 = {3};
	uint32_t num = reverseBits(3);
	cout << num;
}