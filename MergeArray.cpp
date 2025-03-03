#include <iostream>
#include<vector>
#include<climits>
using namespace std;
class RandomizedSet {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.size();
        int len2 = word2.size();
        int f_len = len1 + len2;
        string fin;
        for (int i = 0, j = 0; i < len1 || j < len2; i++, j++)
        {
            if (i < len1)
                fin.push_back(word1[i]);
            if (j < len2)
                fin.push_back(word2[j]);
        }

        return fin;
    }
};
int main()
{
    RandomizedSet* obj = new RandomizedSet();
    string hay = "cdf";
    string need = "a";
    string out = obj->mergeAlternately(hay, need);
    cout << out;
}