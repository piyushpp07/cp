#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s[10];
    int x;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> x;
            s[i].insert(x % 42);
        }
        cout << s[i].size() << "\n";
        }
}