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
    int32 t;
    cin >> t;
    while (t--)

    {
        int32 n = 0, k = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        int64 c = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
                c += 2;
            else
                c += 1;
        }
        while (k--)
        {
            int64 x;
            cin >> x;
            x--;
            char p = s[x];
            if (x == 0)
            {
                if (s.size() == 1)
                {
                    c = 0;
                }
                else if (s[0] == s[1])
                {
                    c -= 1;
                }
                else
                    c += 1;
            }
            else if (x == (n - 1))
            {
                if (s[x] == s[x - 1])
                    c -= 1;
                else
                    c++;
            }
            else
            {
                if ((s[x] == s[x - 1]) && (s[x] == s[x + 1]))
                    c -= 2;
                else if (s[x - 1] == s[x + 1] && s[x - 1] != s[x])
                    c += 2;
            }
            cout << c << "\n";
            if (p == '0')
                s[x] = '1';
            else
                s[x] = '0';
        }
    }
}