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
string s;
bool final = false, ok = false;
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == 1)
        {
            cout << 'H';
        }
        else
            cout << 'A';
    }
    cout << endl;
}
int check()
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == 1 && s[i + 1] == 1)
        {
            dem++;
        }
    }
    if (s[1] == 1 && s[n] == 0 && dem == 0)
    {
        return 1;
    }
    return 0;
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        s[i] = j;
        if (i == n)
        {
            if (check())
            {
                khoitao();
            }
        }
        else
            Try(i + 1);
    }
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n;
        Try(1);
    }
}
