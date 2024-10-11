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
long long fibo[100];
long long fibo1()
{
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i = 3; i < 93; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}
long long luythua(long long n, long long k)
{
    if (n == 1)
    {
        return 'A';
    }
    if (n == 2)
    {
        return 'B';
    }
    if (k <= fibo[n - 2])
    {
        return luythua(n - 2, k);
    }
    else
    {
        return luythua(n - 1, k - fibo[n - 2]);
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
        long long n, m, k;
        cin >> n >> m >> k;
        long long a[n + 5], b[m + 5];
        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            v.push_back(b[i]);
        }
        sort(v.begin(), v.end());
        long long sum = 0, max1 = -1e9;
        cout << v[k - 1] << endl;
    }
}