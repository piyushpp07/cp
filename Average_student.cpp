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

//calculating divisors of a number
vector<int> no_Divisors(int x)
{
    vector<int> ans;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ans.push_back(i);
            if (i * i != x)
                ans.push_back(x / i); // if i*i != n then n/i*i is the factor so we should add n/i too...
        }
    }
    return ans;
}

int main()
{
    int x;
    cin >> x;
    int arr[x];
    int s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        vector<int> v = no_Divisors(arr[i]);
        if (v.size() == 1)
            s1++;
        else if (v.size() == 2)
            s2++;
        else if (v.size() == 3)
            s3++;
        else if (v.size() == 4)
            s4++;
    }
    cout << s2 + s3 - s4 - s1;
}