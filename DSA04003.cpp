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

const int mod = 123456789;

long long luythua(long long n, long long k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n;
    long long x = luythua(n, k / 2);
    if (k % 2 == 0)
        return (x * x) % mod;
    else
        return (n % mod * (x * x) % mod) % mod;
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
    int x;
    cin >> x;
    while (x--)
    {
        long long n;
        cin >> n;
        cout << luythua(2, n - 1) % mod << endl;
    }
}