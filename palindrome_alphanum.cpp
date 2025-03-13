#include<iostream>
#include<format>
using namespace std;
class palindrome
{
private:
    string nor;
public:
    bool isPalindrome(string s) 
    {
        string temp;
        if (s.size() == 0 || s.size()==1)
            return 1;
        for (auto &i:s)
        {
            
            if (isalnum(i))
            {
                temp += tolower(i);
            }
        }
        if (temp.size() > 0)
        {
            int i{ 0 };
            auto j{ temp.size() - 1 };
            while (i < j && temp.size() >= 0)
            {
                if (temp[i] != temp[j])
                {
                    return 0;
                }
                i++; j--;
            }
            return 1;
        }
        else
            return 0;
    }
};

int main()
{
    string s{ "0P"};
    palindrome* p = new palindrome();
    bool ans{ p->isPalindrome(s) };
    cout << ans;

}