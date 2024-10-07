#include<stdio.h>
#include<iostream>
#include<vector>
#include <unordered_map>
#include<algorithm>
#include <unordered_set>
using namespace std;

bool isHappy(int n) {
	unordered_set<int>s1;
	int s=n;
	//int count = 1;
	int sum = 0;
	unordered_set<int>::iterator i;
	while (s != 1 && s1.find(s) == s1.end())
	{
		sum = 0;
		s1.insert( s % 10);
		while (s >0)
		{
			int num = s % 10;
			sum += pow(num, 2);
			s /= 10;
		}
		s = sum;
	}
	if (s == 1)
		return true;
	else
		return false;
}
int main()
{
	int n = 2;
	bool ans=isHappy(n);
	cout << ans;
}
