#include<iostream>
#include<vector>
using namespace std;
vector<int> getRow(int rowIndex) {
	vector<int> res(rowIndex + 1, 1);
	for (int i = 1; i < rowIndex; ++i) {
		for (int j = i; j > 0; --j) {
			res[j] += res[j - 1];  
		}
	}

	return res;
}
int main()
{
	int i;
	cout << "enter: ";
	cin >> i;
	vector<int>res=getRow(i);
	int size = res.size();
	for (int i = 0; i < size; i++)
	{
		cout << res[i]<<" ";
	}
}