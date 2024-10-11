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

int n, k;

const int mod = 1e9 + 7;
struct matran
{
    long long a[11][11];
    friend matran operator*(matran x, matran y)
    {
        matran c;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c.a[i][j] = 0;
                for (int k = 0; k < n; k++)
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
        cin >> n >> k;
        matran y;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> y.a[i][j];
            }
        }
        matran c = luythua(y, k);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << c.a[i][j] << ' ';
            }
            cout << endl;
        }
    }
}