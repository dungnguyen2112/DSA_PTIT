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
        s[i] = '0';
    }
}
void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    if (i < 0)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = '0';
        }
    }
    else
    {
        s[i] = '1';
    }
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> s;
        sinh();
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
}
