#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s1 = "dog";
	string s2 = "racecar";
	string s3 = "car";
	int n1 = s1.length();
	int n2 = s2.length();
	int n3 = s3.length();
	int len;
	len = min(n1, min(n2, n3));
	int count = 0;
	int j = n2;
	char* a = new char[len]();

	for (int i = 0; i < n1; i++)
	{
		if (j > 0)
		{
			if (s1[i] == s2[n2 - j])
			{
				a[n2 - j] = s1[i];

				j--;
			}
		}
	}

	for (int i = 0; i < n3; i++)
	{
		j = len;
		while (j > 0)
		{
			if (s3[i] == a[len - j])
			{
				count++;
			}
			j--;
		}
	}

	if (count == 0)
	{
		cout << "no match found";
	}
	else
	{
		for (int i = 0; i < count; i++)
		{
			cout << a[i];
		}
	}
	delete[]a;
}