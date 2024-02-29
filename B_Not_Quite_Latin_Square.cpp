
#include <bits/stdc++.h>
using namespace std;

void answer()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        vector<string> accha(3);
        char oh;
        for (int i = 0; i < 3; i++)
        {
            cin >> accha[i];
        }
        for (char word : {'A', 'B', 'C'})
        {
            int cnt = 0;
            for (string &r : accha)
            {
                for (char c : r)
                {
                    if (c == word)
                    {
                        cnt++;
                    }
                }
            }
            if (cnt == 2)
            {
                oh = word;
                break;
            }
        }
        printf("%c\n",oh);
    }
}
int main()
{
    answer();
}
