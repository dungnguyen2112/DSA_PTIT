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

const int mod = 1e9 + 7;
struct matran
{
    long long a[2][2];
    friend matran operator*(matran x, matran y)
    {
        matran c;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                c.a[i][j] = 0;
                for (int k = 0; k < 2; k++)
                {
                    c.a[i][j] += x.a[i][k] * y.a[k][j];
                    c.a[i][j] %= mod;
                }
            }
        }
        return c;
    }
};
matran luythua(matran n, long long k)
{
    if (k == 1)
    {
        return n;
    }
    matran b = luythua(n, k / 2);
    if (k % 2 == 0)
    {
        return b * b;
    }
    else
    {
        return n * b * b;
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
        long long n;
        cin >> n;
        matran y;
        y.a[0][0] = 1;
        y.a[1][0] = 1;
        y.a[0][1] = 1;
        y.a[1][1] = 0;
        matran c = luythua(y, n);
        cout << c.a[1][0] << endl;
    }
}