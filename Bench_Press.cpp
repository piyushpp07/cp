#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
int32_t main()
{
    int t, n, w, wr, sum;
    cin >> t;
    while (t--)
    {
        cin >> n >> w >> wr;
        map<int, int> mp;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        if (wr >= w)
            cout << "YES\n";
        else
        {
            w -= wr;
            for (int i = 0; i < n; i++)
            {
                if (mp[ar[i]] >= 2)
                {
                    int cou = mp[ar[i]];
                    if (cou % 2 == 0)
                        w -= cou * ar[i];
                    else
                        w -= (cou - 1) * ar[i];
                    mp[ar[i]] = 0;
                }
                if (w <= 0)
                    break;
            }
            if (w <= 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}