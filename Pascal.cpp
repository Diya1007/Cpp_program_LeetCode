#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows) 
{
	vector<int>res(numRows + 1, 1);
	vector<vector<int>>r1(numRows+1);
	int temp = numRows;
	int x = numRows;
	for (; x >= 0; x--)
	{
		int i;
		
			for (i = 1; i < numRows; i++)
			{
				for (int j = i; j > 0; j--)
				{
					res[j] += res[j - 1];
				}
			}
		r1[x] = res;
		res.clear();
		numRows--;
		res.assign(numRows + 1, 1);
	}
	if (r1.size() > temp)
	{
		r1.pop_back();
	}
	return r1;
}
int main()
{
	int i1,x=0;
	cout << "enter: ";
	cin >> i1;
	vector<vector<int>>res=generate(i1);
	for (int i = 0; i <i1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << res[i][j] << " ";
		}
		cout << "\n";
		x++;
	}
}