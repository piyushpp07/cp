SELECT MAX(POPULATION) - MIN(POPULATION)
FROM CITY
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