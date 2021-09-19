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
    int32 n;
    cin >> n;
    int32 a[n];
    cin >> l >> r;
    for (int i = 0; i < n; i++)
        cin >> a[n];
    int p[n], q[n];
    p[0] = a[0];
    for (int i = 0; i < n; i++)
        p[i] = a[i - 1] + a[i];
    q[0] = a[0];
    for (int i = 1; i <= n; i++)
        q[i - 1] = q[i - 1] * i;
    for (int i = 0; i < n; i++)
        q[i] = q[i] + p[i] * (1 - l)
}