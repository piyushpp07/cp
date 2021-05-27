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
typedef unsigned long long int uint64;
int gcd(int a, int b)
{
    int temp;
    while (b > 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
// check wether a no is prime or not o(n(1/2))
bool is_Prime(int64 x)
{
    for (int64 i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
//calculating divisors of a number
vector<int64> no_Divisors(int64 x)
{
    vector<int64> ans;
    for (int64 i = 2; i * i <= x; i++)
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
//calculating prime factors
using ii = pair<int64, int64>;
vector<ii> factors(int64 x)
{
    vector<ii> ans;
    for (int64 i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            int cnt = 0;
            while (x % i == 0)
            {
                cnt++;
                x /= i;
            }
            ans.push_back({i, cnt});
        }
    }
    if (x > 1)
        ans.push_back({x, 1});
    return ans;
}
//sieve method upto 1e7
int64 is_prime[1000001] = {1};
void sieve()
{
    for (int64 i = 2; i <= 1000001; i++)
    {
        if (is_prime[i])
            for (int64 j = i * i; i <= 1000001; j += i)
                is_prime[i] = 0;
    }
}

int main()
{
    int64 x;
    cin >> x;
    vector<ii> c = factors(x);
    for (int64 i = 0; i < c.size(); i++)
    {
        cout << c[i].first << " " << c[i].second << "\n";
    }
}