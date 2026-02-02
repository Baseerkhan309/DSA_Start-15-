#include <iostream>
#include <string>
using namespace std;

// String Swap
bool areAlmostEqual(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    char diffChar1, diffChar2;
    int diff = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            if (!diff)
            {
                diffChar1 = s1[i];
                diffChar2 = s2[i];
            }
            else
            {
                if (s1[i] != diffChar2 || s2[i] != diffChar1)
                {
                    return false;
                }
                int getVowelCount(string str)
                {
                    int vowCount = 0;
                    for (int i = 0; i < str.length(); i++)
                    {
                        if (str[i] == 'a' || str[i] == 'e' ||
                            str[i] == 'i' || str[i] == 'o' ||
                            str[i] == 'u')
                        {
                            vowCount++;
                        }
                    }
                    return vowCount;
                }
                Question 1 : Question 2:
            }
            diff++;
        }
        if (diff > 2)
        {
            return false;
        }
    }
    if (diff == 1)
    {
        return false;
    }
    return true;
}
int main()
{
    string st1 = "bank";
    string st2 = "kanb";

    return 0;
}