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
string x, s;
vector<bool> final;
void khoitao()
{
    for (int i = 0; i < n; i++)
    {
        cout << x[i];
    }
    cout << ' ';
}
void Try(int i)
{
    for (int j = 0; j < n; j++)
    {
        if (!final[j])
        {
            x[i] = s[j];
            final[j] = true;
            if (i == n - 1)
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
        cin >> s;
        sort(s.begin(), s.end());
        n = s.size();
        x.resize(n);
        final.resize(n, false);
        Try(0);
        cout << endl;
    }
}