#include<iostream>
#include<vector>
using namespace std;
vector<int> countBits(int n) {
	
	vector<int>v1(n);
	int count = 0;
	uint32_t num=0;
	uint32_t res=0;
	uint32_t m = 0;
	for (int i = 0; i < n; i++)
	{
		m = i;
		for (int j = 0; j < 32; j++)
		{
			if (m&1)
			{
				count++;
			}
			res = m >> 1;
			m = res;
		}
		v1[i] = count;
		count = 0;
	}
	return v1;
}

int main()
{
	int n;
	cout << "enter the number ";
	cin >> n;
	vector<int>v1=countBits(n);
}