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
bool final[1000];
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 0)
        {
            cout << 'A';
        }
        else
            cout << 'B';
    }
    cout << ' ';
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n)
            khoitao();
        else
        {
            Try(i + 1);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try(1);
        cout << endl;
    }
}
