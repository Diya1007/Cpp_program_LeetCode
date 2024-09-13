#include<iostream>
using namespace std;
int main()
{
	int n, mid;
	cout << "enter array length ";
	cin >> n;
	char* a = new char[n];
	mid = n / 2;
	bool isPanlin = false;
	cout << "Enter into array ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0, j = n - 1; i < mid && j >= mid; i++, j--)
	{

		if (a[i] == a[j])
		{

			isPanlin = true;
			continue;
		}
		else
			isPanlin = false;

	}
	if (isPanlin == true)
	{
		cout << "palindrome";
	}
	else
	{
		cout << "not a palindrome ";
	}

}