#include<iostream>
#include<string>
#include<vector>
using namespace std;

class stack
{
private:
	int* a;
	int top = -1;
	int len;
public:
	stack(int);
	int* push(int);
	int pop();
	bool isEmpty();
	~stack();
};
stack::~stack()
{
	cout << "going out of scope \n";
	delete[] a;
}
 stack::stack(int size)
{
	 a = new int[size];
	 len = size;
}
bool stack::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}
int* stack::push(int k)
{
	if (top != len - 1)
	{
		a[++top] = k;
		return a;
	}
	else
		cout << "stack is full \n";
}
int stack::pop()
{
	if (!isEmpty())
	{
		int num = a[top];
		top = top - 1;
		return num;
	}
	else
	{
		cout << "stack is empty \n";
		return 0;
	}
}
int main()
{
	 stack* obj = new stack(3);
	 obj->push(6);
	 obj->push(9);
	 obj->push(8);
	 obj->push(4);
		 int n= obj->pop();
		 int n1 = obj->pop();
		 int n2= obj->pop();
		 int n3= obj->pop();
		 delete obj;
		 cout << n<<" " << n1<<" " << n2<<" " << n3<<" ";
}