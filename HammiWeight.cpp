#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int hammingWeight(int n) {
	vector<int>v1;
	int res = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((n >> i) & 1)
			res += 1;
	}

	return res;
}
int main()
{
	int i;
	cout << "Enter a number ";
	cin >> i;
	int j = hammingWeight(i);
	cout << j;
}