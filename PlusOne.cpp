#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& num)
{
	int size = num.size() - 1;
	int carry = 1, temp = 0;
	int n = num.back();
	for (int i = 0; i <= size; i++)
	{
		temp = num[i] + carry + temp;
		temp = temp % 10;
	}
	if (num.front() == 9 && temp == 0)
	{
		num.push_back(0);
		size = num.size() - 1;
		for (int i = size; i > 0; i--)
		{
			num[i] = num[i - 1];
		}
		num[0] = 0;
	}
	if (n < 9)
	{
		n += 1;
		num.back() = n;
	}
	else
	{
		while (n == 9 && size > 0)
		{
			n += carry;
			num[size] = n % 10;
			size -= 1;
			n = num[size];
		}
		num[size] = n + 1;
	}
	return num;
}
int main()
{
	vector<int>v1 = { 9 };
	v1 = plusOne(v1);
	int n = v1.size();
	for (int i = 0; i < n; i++)
	{
		cout << v1[i] << ",";
	}
}