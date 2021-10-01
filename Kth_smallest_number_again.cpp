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
   int t=0;
   cin>>t;
   while(t--)
   {
      int n=0,q=0;
      cin>>n>>q;
      vector<int>v;
      while(n--)
      {  int a,b;
         cin>>a>>b;
         for(int i=a;i<=b;i++)
         {
            v.push_back(i);
         }
         while(q--)
         {
            int z;
            cin>>z;
            if(v[z-1]>0)
            cout<<v[z-1]<<"\n";
            else cout<<"-1\n";
         }

      }
   }
}