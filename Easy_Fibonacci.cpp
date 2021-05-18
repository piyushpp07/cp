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
int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
    }
}