/*#include<iostream>
#include<string.h>
#include<vector>
#include<set>
using namespace std;
int maxUniqueSplit(string s) {
	set<string>set1;
	int len = s.length();
	for (int i = 0; i < len; i++)
	{
		for (int end = i+1; end <= len; end++)
		{
			string str = s.substr(i, end - i);
			auto ptr = set1.find(str);
			if (ptr == set1.end())
			{
				set1.insert(str);
			}
		}
	}
	for (int i = 0; i < set1.size(); i++)
	{
		for (int j = i + 1; j < set1.size(); j++)
		{
			if (set1)
		}
	}
	int l=set1.size();
	return l;
}

int main()
{
	string s;
	cin >> s;
	int num=maxUniqueSplit(s);
	cout << num;
}*/

#include <iostream>
#include <string>
#include <set>
#include<math.h>
using namespace std;

int maxSplit = 0;

void backtrack(const string& s, int start, set<string>& current) {
	if (start == s.length()) {
		maxSplit = std::max(maxSplit, int(current.size()));
		return;
	}

	for (int end = start + 1; end <= s.length(); end++) {
		string substr = s.substr(start, end - start);
		if (current.find(substr) == current.end()) {
			current.insert(substr);
			backtrack(s, end, current);
			current.erase(substr);
		}
	}
}

int maxUniqueSplit(string s) {
	set<string> current;
	maxSplit = 0; 
	backtrack(s, 0, current);
	return maxSplit;
}

int main() {
	string s;
	cin >> s;
	int num = maxUniqueSplit(s);
	cout << num << endl;
	return 0;
}