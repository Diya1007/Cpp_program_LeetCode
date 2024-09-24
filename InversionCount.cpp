#include<iostream>
using namespace std;

int Inversion(int start, int mid, int end, int a[])
{
	int l1 = mid - start + 1;
	int l2 = end - mid;
	int* a1 = new int[l1];
	int* a2 = new int[l2];
	int num = 0;
	for (int i = 0; i < l1; i++)
	{
		a1[i] = a[start + i];
	}
	for (int j = 0; j < l2; j++)
	{
		a2[j] = a[mid +1+ j ];
	}
	
	int i = 0, j = 0, k = start;
	while (i < l1 && j < l2)
	{
		if (a1[i] <= a2[j])
		{
			a[k] = a1[i];
			i++;
		}
		else
		{
			a[k] = a2[j];
			j++;
			num += (l1 - i);
		}
		k++;
	}

	if (i < l1)
	{
		a[k] = a1[i];
		i++;
		k++;
	}
	else if (j < l2)
	{
		a[k] = a2[j];
		j++;
		k++;
	}
	return num;
}
int CountInversion(int s, int end, int a[])
{
	int num = 0;
	if (s < end)
	{
		int mid = s + (end - s) / 2;
		num+=CountInversion(s, mid, a);
		num+=CountInversion(mid + 1, end, a);
		num +=Inversion(s, mid, end, a);
	}
	return num;
}
int main()
{
	int a[] = { 4,8,6,3,5,1,2 };
	int len = sizeof(a) / sizeof(int);
	int count=CountInversion(0,len-1,a);
	cout << count<<'\n';

	for (int i = 0; i < len; i++)
		cout << a[i]<<" ";
}