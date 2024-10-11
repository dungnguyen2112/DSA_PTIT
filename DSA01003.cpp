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
    int i = n - 1;
    while (i >= 1 && x[i] >= x[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            x[i] = i;
        }
    }
    else
    {
        int j = n;
        while (x[i] > x[j])
        {
            j--;
        }
        swap(x[i], x[j]);
        reverse(x + i + 1, x + n + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> x[i];
        }
        sinh();
        for (int i = 1; i <= n; i++)
        {
            cout << x[i] << ' ';
        }
        cout << endl;
    }
}
