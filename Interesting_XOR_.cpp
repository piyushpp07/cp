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
    int t;
    cin >> t;
    while (t--)
    {
        int64 c = 0;
        cin >> c;
        int64 a = 0, b = 0;
        int f = 1;
        int id = 0;
        for (int i = 31; i >= 0; i--)
        {
            if ((1 << i) & c)
            {
                id = i;
                break;
            }
        }
        for (int i = id; i >= 0; i--)
        {
            if ((i << i) & c)
            {
                if (f)
                {
                    a |= (1 << i);
                    f = 0;
                }
                else
                {
                    b |= (1 << i);
                }
            }
            else
            {
                a |= (1 << i);
                b |= (1 << i);
            }
        }
        cout << a << " " << b << "\n";
    }
}