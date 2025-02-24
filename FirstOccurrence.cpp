#include <iostream>
#include<vector>
#include<climits>
#include<set>

using namespace std;
class RandomizedSet {
public:
    int strStr(string haystack, string needle) {
      
        if (haystack.find(needle) != -1)
            return haystack.find(needle);
        else
            return -1;
    }
};
int main()
{
    RandomizedSet* obj = new RandomizedSet();
    string hay = "sadbutsad";
    string need = "sado";
   int index= obj->strStr(hay,need);
   cout << index;
}