#include<iostream>
#include<fstream>
#include <sstream>
using namespace std;

int peak(int start, int end, int a[])
{
	int mid = (start + end) / 2;
	int index;
	if ((a[mid] > a[mid - 1]) && a[mid] > a[mid + 1])       // a[mid] should be greater than both a[m+1] & a[m-1] to satisfy the condition
	{
		index = mid;	
		return index;
	}
	else
	{
		if (a[mid] < a[mid - 1])							//if a[mid-1] >a[mid], update end with mid. The peak is in the left half
		{
			end = mid;
			index=peak(start, mid, a);
			
		}
		if (a[mid] < a[mid + 1])						//if a[mid+1] >a[mid], update start with mid.The peak is in the right half
		{
			start = mid;
			index=peak(mid, end, a);
		}
		return index;
	}

}
int main()
{
	ifstream peaktxt;
	peaktxt.open("peak.txt");
	int len = 0,number,d=0;

	if (!peaktxt.is_open()) 
	{
		std::cerr << "Unable to open file: " << "peak.txt" << '\n';
		return 1;
	}

	while (peaktxt >> number)
	{
		len++;						//counting number of items in file
	}
	int *a = new int[len];        //declaring the array a with length len
	
	peaktxt.clear();
	peaktxt.seekg(0, std::ios::beg);

	while (peaktxt >> number && d < len)    //Initalizing array a with file element
	{
		a[d++] = number;
	}
	peaktxt.close();				//closing file
	int n = len;
	int start=0;
	int index= peak(start, n-1, a);		//calling peak funtion
	cout <<"found at index: " << index<<'\n' << "value:  " << a[index];
	delete []a;						//deleting pointer to the array
	

}