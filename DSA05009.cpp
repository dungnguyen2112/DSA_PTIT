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
int n, sum;
int a[105];
bool stop;

void Try(int i, int s)
{
    if (s == sum / 2)
    {
        stop = true;
        return;
    }
    if (stop == true)
        return;
    for (int j = i; j <= n; j++)
    {
        if (s + a[j] <= sum / 2)
        {
            Try(i + 1, s + a[j]);
        }
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n;
        sum = 0;
        stop = false;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 0)
        {
            Try(1, 0);
        }
        if (stop)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
