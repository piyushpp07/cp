#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
typedef pair<int, int> pr;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pr> vpi;
typedef vector<vi> vvi;
typedef map<int, int> ma;
typedef set<int> si;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
int main()
{
    int32 n, m;
    cin >> n >> m;
    int32 arr[n + 1][m + 1], p[n + 1][m + 1];
    for (int32 i = 0; i <= n; i++)
    {
        for (int32 j = 0; j <= m; j++)
            arr[i][j] = 0, p[i][j] = 0;
    }
    for (int32 i = 1; i <= n; i++)
    {
        for (int32 j = 1; j <= m; j++)
            cin >> arr[i][j];
    }
    for (int32 i = 1; i <= n; i++)
    {
        for (int32 j = 1; j <= m; j++)
            p[i][j] = arr[i][j] + p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1];
    }
    int32 q;
    cin >> q;
    while (q--)
    {
        int32 u, l, d, r;
        cin >> u >> l >> d >> r;
        cout << p[d][r] - p[d][l - 1] - p[u - 1][r] + p[u - 1][l - 1];
    }
}
