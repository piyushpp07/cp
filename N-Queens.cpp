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
vi placed;
int ans = 0;
int n;
void rec(int row)
{
    if (row == n)
    { 
        ans++;
        return;
    }
    for (int col = 0; col < n; col++)
    {
        bool safe = 1;
        for (int pRow = 0; pRow < row; pRow++)
        {
            int pCol = placed[pRow];
            if (pCol == col || (abs(row - pRow)) == abs(col - pCol))
                safe = 0;
        }
        if (safe)
        {
            placed.push_back(col);
            rec(row + 1);
            placed.pop_back();
        }
    }
}
int main()
{
    cin >> n;
    rec(0);
    cout << ans;
}