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
        return 1;
    if (k == 1)
        return n;
    long long x1 = luythua(n, k / 2);
    long long x2 = (x1 * x1) % mod;
    if (k % 2 == 0)
        return x2;
    else
        return (n % mod * x2) % mod;
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        long long n, k;
        cin >> n >> k;
        cout << luythua(n, k) % mod << endl;
    }
}