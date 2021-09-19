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
int fastexpo(int a, int b, int mod)
{
    int ans = 1;
    while (b)
    {
        if (b % 2 == 1) // 1011 this is binary form eg then this is used to check weather the last bit is zero or 1 if 1 it means to multiply the ans with a
        {
            ans = (1LL * ans * a % mod);
        }
        a = 1LL * a * a % mod; //eg 1001 means 2^0*2^3 only
        b = b / 2;             //divide each time to go to next bit it can be done using bit manipulation
    }
    return ans;
}
void solve(int n, int m)
{
    int64 p = fastexpo(2, n, 1e9 + 7);
    p = p - 1;
    p = fastexpo(p, m, 1e9 + 7);
    cout << p << "\n";
}
int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        solve(n, m);
    }
}