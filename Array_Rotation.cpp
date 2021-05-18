#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
int32_t main()
{
    int n, sum = 0, q;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum = (sum + x + MOD) % MOD;
    }
    cin >> q;
    while (q--)
    {
        sum = (sum * 2) % (MOD);
        cout << sum << "\n";
    }
}