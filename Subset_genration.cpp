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

vector<vector<int>> subsets(vector<int> &nums)
{
    int size = nums.size();
    int sn = (1 << size);
    vector<vector<int>> ass;
    for (int sm = 0; sm < sn; sm++)
    {
        vector<int> sub;
        for (int i = 0; i < size; i++)
        {
            if ((sm & (1 << i)) != 0)
                sub.push_back(nums[i]);
        }
        ass.push_back(sub);
    }
    return ass;
}
int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vvi a = subsets(arr);       
}