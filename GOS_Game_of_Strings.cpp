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
      string s;
      cin >> s;
      int n = s.length();
      int i = 0, point = 0;
      while (i < (n - 1))
      {
         if ((s[i] == 'x') && s[i + 1] == 'y')
         {
            point += 1;
            i += 2;
         }
         else if ((s[i] == 'y') && s[i + 1] == 'x')
         {
            point += 1;
            i += 2;
         }
         else
            i++;
      }
      cout<<point<<"\n";
   }
}