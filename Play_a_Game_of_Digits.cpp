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
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n = 0, ans = 0;
      string no;
      cin >> n >> no;
      if (n % 2 != 0)
      {
         for (int i = 0; i <= n; i += 2)
         {
            if (no[i] % 2 != 0)
            {
               ans = 1;
               break;
            }
            else
               ans = 2;
         }
      }
      else if (n % 2 == 0)
      {
         for (int i = 0; i <= n; i += 2)
         {
            if (no[i] % 2 == 0)
            {
               ans = 2;
               break;
            }
            else
               ans = 1;
         }
      }
      cout << ans << endl;
   }
}