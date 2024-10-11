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
    int k = 0;
    for (int i = 0; i < s.length(); i++)
    {
        k = (k * 10 + (s[i] - '0')) % n;
    }
    return k == 0;
}
void solve()
{
    string s1;
    cin >> s1;
    queue<string> q;
    string s = "";
    q.push("1");
    int dem = 1;
    while (true)
    {
        s = q.front();
        q.pop();
        string s2 = s + "0";
        if (s2.size() > s1.size() || (s2.size() == s1.size() && s2 > s1))
        {
            break;
        }
        dem++;
        q.push(s2);
        s2 = s + "1";
        if (s2.size() > s1.size() || (s2.size() == s1.size() && s2 > s1))
        {
            break;
        }
        dem++;
        q.push(s2);
    }
    cout << dem;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        solve();
        cout << endl;
    }
}