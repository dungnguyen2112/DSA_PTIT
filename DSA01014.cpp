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
int n, k, s, dem, a[100];
void khoitao()
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        sum += a[i];
    }
    if (sum == s)
    {
        dem++;
    }
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            khoitao();
        }
        else
            Try(i + 1);
    }
}

int main()
{
    faster()
    while (1)
    {
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0)
        {
            break;
        }
        dem = 0;
        Try(1);
        cout << dem << endl;
    }
}