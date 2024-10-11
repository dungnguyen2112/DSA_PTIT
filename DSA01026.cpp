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
vector<string> res;
void khoitao()
{
    int dem = 0, dem1 = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '8' && s[i + 1] == '8')
        {
            dem++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '6')
        {
            int p = i + 1;
            while (s[p] == '6')
            {
                p++;
                dem1++;
            }
            i = p;
        }
    }

    if (s.front() == '8' && s.back() == '6' && s.find("88") == -1 && s.find("6666") == -1)
    {
        res.push_back(s);
    }
}
int check()
{
    int dem = 0, dem1 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == 1 && s[i + 1] == 1)
        {
            dem++;
        }
        if (s[i] == 0 && s[i + 1] == 0 && s[i + 2] == 0)
        {
            dem1++;
        }
    }
    if (s[1] == 1 && s[n] == 0 && dem == 0 && dem1 == 0)
    {
        return 1;
    }
    return 0;
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        if (j == 0)
            s[i] = '6';
        else
            s[i] = '8';
        if (i == n - 1)
        {
            khoitao();
        }
        else
            Try(i + 1);
    }
}
int main()
{
    cin >> n;
    s.resize(n);
    Try(0);
    sort(res.begin(), res.end());
    for (auto i : res)
    {
        cout << i;
        cout << endl;
    }
}