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

char luythua(long long n, long long k)
{
    if (k % 2 == 1)
    {
        return 'A';
    }
    if (k == (long long)pow(2, n - 1))
    {
        return n + '@';
    }
    if (k < pow(2, n - 1))
    {
        return luythua(n - 1, k);
    }
    else
    {
        return luythua(n - 1, k - (long long)pow(2, n - 1));
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
    int x;
    cin >> x;
    while (x--)
    {
        long long n, k;
        cin >> n >> k;
        cout << luythua(n, k) << endl;
    }
}