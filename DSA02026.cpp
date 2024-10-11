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

int check[2] = {'+', '-'};
string s;
int check2()
{
    int x = stoi(s.substr(0, 2));
    int y = stoi(s.substr(5, 2));
    int z = stoi(s.substr(10, 2));
    if (x < 10 || y < 10 || z < 10)
    {
        return 0;
    }
    if (s[3] == '+')
    {
        return (x + y == z);
    }
    else
    {
        return (x - y == z);
    }
}
bool ok;
void Try(int i)
{
    if (ok)
        return;
    if (i == s.length())
    {
        if (check2())
        {
            ok = true;
            cout << s << endl;
        }
        return;
    }
    if (s[i] == '?')
    {
        if (i == 3)
        {
            for (int k = 0; k < 2; k++)
            {
                s[i] = check[k];
                Try(i + 1);
                s[i] = '?';
            }
        }
        else
        {
            for (int k = 0; k <= 9; k++)
            {
                s[i] = k + '0';
                Try(i + 1);
                s[i] = '?';
            }
        }
    }
    else
        Try(i + 1);
}
void solve()
{
    ok = false;
    getline(cin, s);
     for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '*' or s[i] == '/') {
            cout << "WRONG PROBLEM!" << endl;
            return;
        }
    }
    Try(0);
    if (!ok)
    {
        cout << "WRONG PROBLEM!" << endl;
    }
}
int main()
{
    int x;
    cin >> x;
    cin.ignore();
    while (x--)
    {
        solve();
    }
}