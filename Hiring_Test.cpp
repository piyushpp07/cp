#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, v, s, x, y, f, p;
    char q;
    cin >> t;
    while (t--)
    {
        cin >> v >> s >> x >> y;
        int a[v];
        for (int i = 0; i < v; i++)
        {
            p = 0, q = 0, f = 0;
            ;
            for (int j = 0; j < s; j++)
            {
                cin >> q;
                if (q == 'F')
                    f++;
                else if (q == 'P')
                    p++;
                else
                    continue;
            }
            if (f >= x || (f == (x - 1) && p >= y))
                a[i] = 1;
            else
                a[i] = 0;
        }
        for (int i = 0; i < v; i++)
            cout << a[i];
        cout << "\n";
    }
}