#include <iostream>


using namespace std;

int nrl(const char s[], char low[])
{
    int frequency[26]{0};
    int res = 0;
    for (int i = 0; s[i] != '\0'; i++) // A --> 65 ----> 90 a----->97 z---->122
    {
        if (s[i] != ' ')
        {

            int x = int(s[i]);
            if (x > 96)
                frequency[x - 97] += 1;
            else
                frequency[x - 65] += 1;
        }
    }
    int k = 0;
    for (int j = 0; j < 26; j++)
    {
        if (frequency[j] == 1)
        {
            low[k] = char(97 + j);
            res += 1;
            k++;
        }
    }
    if (!res) low[0] = '\0'; ;
    return res;
}

