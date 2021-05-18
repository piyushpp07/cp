#include <iostream>
using namespace std;
#define lli long long int
lli mod = 1e9 + 7;
lli fact[100001] = {1};
lli fastexpo(lli a, lli b, lli mod);
void fa()
{
    fact[0] = fact[1] = 1;
    for (lli i = 2; i <= 100001; i++)
    {
        fact[i] = (i * fact[i - 1]) % mod;
    }
}
lli nCr(lli a, lli b)
{
    lli ans = 1;
    ans = (fact[a] % mod * fastexpo(fact[a - b], (mod - 2), mod) % mod * fastexpo(fact[b], (mod - 2), mod) % mod) % mod;
    return ans;
}
lli fastexpo(lli a, lli b, lli mod)
{
    lli ans = 1;
    while (b)
    {
        if (b % 2 == 1) // 1011 this is binary form eg then this is used to check weather the last bit is zero or 1 if 1 it means to multiply the ans with a
        {
            ans = ans * a % mod;
        }
        a = a * a % mod; //eg 1001 means 2^0*2^3 only
        b = b / 2;       //divide each time to go to next bit it can be done using bit manipulation
    }
    return ans;
}
int main()
{
    int a, b;
    fa();
    cin >> a >> b;
    cout << nCr(a, b);
    // to calculate nCr first we have to calculate factorial of nos->1e5 then we will calculate (n-r)! inverse and r! inverse.. and then calcu
    // cout << fastexpo(a, b, 1e9 + 7) << "\n";
    // calculating mod inverse
    // cout << fastexpo(a, 1e9 + 7 - 2, 1e9 + 7); //a^(p-2) by little theorem
}