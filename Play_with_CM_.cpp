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
      int l = s.length(), cont = 0, max = 0, c = 0;
      for (int i = 0; i < l; i++)
      {
         if (s[i] == 'C')
         {
            c += 1;
         }
         else if (s[i] == 'M' && s[i + 1] == 'M')
         {
            cont += 1;
            if (max <= cont)
            {
               max = cont;
            }
         }

         else
         {
            cont = 0;
         }
      }
      cout << max + c + 1 << endl;
   }
}