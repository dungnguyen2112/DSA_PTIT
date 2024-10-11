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

int n, a[1000];
bool final = false;
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}
int dem = 0;
int check()
{
    for (int i = 1; i <= n / 2; i++)
    {
        if (a[i] != a[n - i + 1])
        {
            dem++;
        }
    }
    if (dem == 0)
    {
        return 1;
    }
    return 0;
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        final = true;
    }
    else
    {
        a[i] = 1;
    }
}
int main()
{
    cin >> n;
    khoitao();
    while (!final)
    {
        int dem = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            if (a[i] != a[n - i + 1])
            {
                dem++;
            }
        }
        if (dem == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] << ' ';
            }

            cout << endl;
        }
        sinh();
    }
}