#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        int n = 0, a = 0, b = 0, anu = 0, sar = 0;
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X')
                sar += a;
            else
                anu += b;
        }

        if (sar == anu)
            cout << "DRAW\n";
        else if (sar > anu)
            cout << "SARTHAK\n";
        else if (anu > sar)
            cout << "ANURADHA\n";
    }
}