#include<iostream>
#include<vector>
#include<set>
#include<map>
#include <unordered_map>
#include<algorithm>
using namespace std;
int addDigits(int num) 
{
	int sum,t=10;
	int count = 0,temp=num;
	while (num >= 10)
	{
		sum = 0;
		while (num > 0)
		{

			sum += int(num % 10);
			num = num / 10;
		}
		num = sum;
	}
	return num;
}
int main()
{
	int num = 138;
	num=addDigits(num);

	cout << num;
}