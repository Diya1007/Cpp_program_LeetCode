#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	
	int k = m-1;
	
	int i = 0;
	for (; i <= k; i++)
	{
		int min = i;
		for (int j = 0; j < n; j++)
		{
			if (nums2[j] <= nums1[min])
			{
				min = j;
				for (int a = k; a >=i; a--)
				{
					nums1[a + 1] = nums1[a];
				}
				nums1[i] = nums2[min];
				k++;
				for (int b = j+1; b <n; b++)
				{
					nums2[b-1] = nums2[b];
				}
				nums2.pop_back();
				n = nums2.size();
			}
		}
		
	}
	if (i != nums1.size())
	{
		for (int a = k+1,b=0; a < (nums1.size()) && b<n; a++,b++)
		{
			nums1[a] = nums2[b];
		}
	}

}
int main()
{
	vector<int>n1 = { 0 };
	vector<int>n2 = {1 };
	int m = 0, n = 1;
	merge(n1, m, n2, n);
}