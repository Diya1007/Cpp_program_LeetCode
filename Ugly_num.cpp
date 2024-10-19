#include<iostream>
using namespace std;
bool isUgly(int n) {
	int num = n;
	int j = 1;
	if (n == 1)
	{
		return 1;
	}
	if (n <= 0)
		return 0;
	else
	{
		while (num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
		{
			if (num % 2 == 0)
			{
				num = num / 2;
			}
			if (num % 3 == 0)
			{
				num = num / 3;
			}
			if (num % 5 == 0)
			{
				num = num / 5;
			}
		}
	}
	if (num == 1)
		return 1;
	else
		return 0;
	
}
int main()
{
	int n;
	cout << "enter the number ";
	cin >> n;
	cout<<isUgly(n);
}