#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, l;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        float one = 0;
        cin >> l;
        string s;
        cin >> s;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '1')
            {
                one++;
                if (one / (i + 1) >= 0.5)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}