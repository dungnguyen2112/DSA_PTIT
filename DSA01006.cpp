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
        cout << x[i];
    }
    cout << ' ';
}
void Try(int i)
{
    for (int j = n; j >= 1; j--)
    {
        if (!final[j])
        {
            final[j] = true;
            x[i] = j;
            if (i == n)
            {
                khoitao();
            }
            else
            {
                Try(i + 1);
            }
            final[j] = false;
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
