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

int n, k, x[1000];
bool final = false, ok = false;
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        x[i] = i;
    }
}
void sinh()
{
    int i = k;
    while (i >= 1 && x[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        for (int i = 1; i <= k; i++)
        {
            x[i] = i;
        }
    }
    else
    {
        x[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            x[j] = x[j - 1] + 1;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> x[i];
        }
        sinh();
        for (int i = 1; i <= k; i++)
        {
            cout << x[i] << ' ';
        }
        cout << endl;
    }
}
