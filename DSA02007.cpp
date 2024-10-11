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

int check(string s, int n)
{
    int x = 0;
    for (int i = 0; i < s.size(); i++)
    {
        x = x * 10 + (s[i] - '0');
        x %= n;
    }
    return x == 0;
}
void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (n == 0)
            break;
        char max1 = '0';
        for (int j = i + 1; j < s.size(); j++)
        {
            max1 = max(max1, s[j]);
        }
        if (max1 <= s[i])
            continue;
        string s1 = s;
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[j] == max1)
            {
                string tmp = s;
                swap(tmp[i], tmp[j]);
                s1 = max(s1, tmp);
                
            }
        }n--;
        s = s1;
    }
    cout << s << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        solve();
    }
}