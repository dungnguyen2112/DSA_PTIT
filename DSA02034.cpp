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
int n;
vector<int> a;
vector<bool> final;

void khoitao()
{
    for (int i = 1; i < n; ++i)
    {
        if (abs(a[i] - a[i + 1]) == 1)
            return;
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i];
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!final[j])
        {
            a[i] = j;
            final[j] = true;
            if (i == n)
                khoitao();
            else
                Try(i + 1);
            final[j] = false;
        }
    }
}

int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        cin >> n;
        a.resize(n + 1);
        final.resize(n + 1, false);
        Try(1);
    }
}
