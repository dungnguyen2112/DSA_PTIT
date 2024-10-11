#include <bits/stdc++.h>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#define faster()                           \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL);
using namespace std;
using std::string;

const int mod = 1e9 + 7;

long long luythua(long long n, long long k)
{
    if (k == 0)
    {
        return 1;
    }
    if (k == 1)
    {
        return n;
    }
    long long a = luythua(n, k / 2);
    if (k % 2 == 0)
    {
        return (a * a) % mod;
    }
    else
    {
        return (n * ((a * a) % mod)) % mod;
    }
}
long long nghichdao(long long n)
{
    long long sum = 0;
    while (n)
    {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    while (1)
    {
        long long n, k;
        cin >> n >> k;
        if (n == 0 && k == 0)
        {
            break;
        }
        cout << luythua(n, k) << endl;
    }
}